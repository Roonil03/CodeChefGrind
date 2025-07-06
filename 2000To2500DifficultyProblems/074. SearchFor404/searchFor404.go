package main

import (
	"bufio"
	"fmt"
	"os"
)

const MOD = 1000000007

func main() {
	// your code goes here
	// 	r := bufio.NewReader(os.Stdin)
	// 	w := bufio.NewWriter(os.Stdout)
	// 	defer w.Flush()
	// 	var t int
	// 	fmt.Fscanf(r, "%d", &t)
	// 	for t > 0 {
	// 		t--
	// 		var n int
	// 		fmt.Fscanf(r, "%d", &n)
	// 		var s string
	// 		fmt.Fscanf(r, "%s", &s)
	// 		if len(s) > 0 && (s[len(s)-1] == '\n' || s[len(s)-1] == '\r') {
	//             s = s[:len(s)-1]
	//         }
	//         dp0, dp1, dp2, dp3 := 1, 0, 0, 0
	//         for i := 0; i < n; i++ {
	//             switch s[i] {
	//             case '4':
	//                 dp3 = (dp3 + dp2) % MOD
	//                 dp1 = (dp1 + dp0) % MOD
	//             case '0':
	//                 dp2 = (dp2 + dp1) % MOD
	//             case '*':
	//                 dp3 = (dp3*2 + dp2) % MOD
	//                 dp2 = (dp2*2 + dp1) % MOD
	//                 dp1 = (dp1*2 + dp0) % MOD
	//                 dp0 = (dp0 * 2) % MOD
	//             }
	//         }
	//         fmt.Fprintln(w, dp3)
	// 	}
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var T int
	fmt.Fscanf(in, "%d\n", &T)
	for T > 0 {
		T--
		var N int
		fmt.Fscanf(in, "%d\n", &N)
		s, _ := in.ReadString('\n')
		if len(s) > 0 && (s[len(s)-1] == '\n' || s[len(s)-1] == '\r') {
			s = s[:len(s)-1]
		}
		dp0, dp1, dp2 := 0, 0, 0
		cntStar := 0
		for i := 0; i < N; i++ {
			c := s[i]
			var nd0, nd1, nd2 int
			nd0 = dp0
			nd1 = dp1
			nd2 = dp2
			switch c {
			case '4':
				nd0 = (nd0 + modPow(2, cntStar)) % MOD
				nd2 = (nd2 + dp1) % MOD
			case '0':
				nd1 = (nd1 + dp0) % MOD
			case '*':
				nd0 = (2 * nd0) % MOD
				nd1 = (2 * nd1) % MOD
				nd2 = (2 * nd2) % MOD
				nd0 = (nd0 + modPow(2, cntStar)) % MOD
				nd2 = (nd2 + dp1) % MOD
				nd1 = (nd1 + dp0) % MOD
				cntStar++
			}
			dp0, dp1, dp2 = nd0, nd1, nd2
		}
		fmt.Fprintln(out, dp2)
	}
}

func modPow(base, exp int) int {
	res := 1
	b := base % MOD
	for exp > 0 {
		if exp&1 == 1 {
			res = (res * b) % MOD
		}
		b = (b * b) % MOD
		exp >>= 1
	}
	return res
}
