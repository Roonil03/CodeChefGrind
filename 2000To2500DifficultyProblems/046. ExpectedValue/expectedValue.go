package main

import (
	"bufio"
	"fmt"
	"os"
)

const MOD = 998244353

func main() {
	// your code goes here
	//     in  := bufio.NewReader(os.Stdin)
	//     out := bufio.NewWriter(os.Stdout)
	//     defer out.Flush()
	//     var N, P int64
	//     fmt.Fscan(in, &N, &P)
	//     invP2 := pow((P*P)%M, M-2)
	//     c := (P - 1) % M
	//     for i := int64(1); i <= N; i++ {
	//         num := (i*i + i*c) % M
	//         ans := num * invP2 % M
	//         fmt.Fprint(out, ans)
	//         if i < N {
	//             fmt.Fprint(out, " ")
	//         }
	//     }
	//     fmt.Fprintln(out)
	// }

	// func pow(x, e int64) int64 {
	//     var res int64 = 1
	//     for e > 0 {
	//         if e&1 == 1 {
	//             res = (res * x) % M
	//         }
	//         x = (x * x) % M
	//         e >>= 1
	//     }
	//     return res
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var N, P int64
	fmt.Fscan(in, &N, &P)
	for k := int64(1); k <= N; k++ {
		// S1 = sum_{i=1}^k 1/P^(i-1) = (1 - 1/P^k) / (1 - 1/P) = P(1 - 1/P^k)/(P-1)
		powPk := pow(P, k)
		invPowPk := inv(powPk)
		s1_num := (P * (1 - invPowPk + MOD)) % MOD
		s1_den := (P - 1 + MOD) % MOD
		s1 := (s1_num * inv(s1_den)) % MOD
		// S2 = sum_{i=1}^k 1/P^(2i-2) = (1 - 1/P^(2k)) / (1 - 1/P^2) = P^2(1 - 1/P^(2k))/(P^2-1)
		pow2k := pow(P, 2*k)
		inv2k := inv(pow2k)
		s2_num := ((P * P) % MOD * (1 - inv2k + MOD)) % MOD
		s2_den := ((P*P - 1 + MOD) % MOD)
		s2 := (s2_num * inv(s2_den)) % MOD
		// E[S_k^2] = (1/4) * (S1^2 + S2)
		res := (inv(4) * ((s1*s1)%MOD + s2)) % MOD
		fmt.Fprint(out, res)
		if k < N {
			fmt.Fprint(out, " ")
		}
	}
	fmt.Fprintln(out)
}

func pow(base, exp int64) int64 {
	res := int64(1)
	base %= MOD
	for exp > 0 {
		if exp%2 == 1 {
			res = (res * base) % MOD
		}
		base = (base * base) % MOD
		exp /= 2
	}
	return res
}

func inv(x int64) int64 {
	return pow(x, MOD-2)
}
