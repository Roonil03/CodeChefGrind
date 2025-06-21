package main

import (
	"bufio"
	"os"

	// "strconv"
	"fmt"
	"sort"
)

// const M = 1000000007

// func main(){
// 	// your code goes here
// 	in := bufio.NewReader(os.Stdin)
//     out := bufio.NewWriter(os.Stdout)
//     defer out.Flush()
//     tS, _ := in.ReadString('\n')
//     t, _ := strconv.Atoi(tS[:len(tS)-1])
//     for ; t > 0; t-- {
//         nS, _ := in.ReadString('\n')
//         n, _ := strconv.Atoi(nS[:len(nS)-1])
//         cnt := make([]int, n+2)
//         arr := make([]int, n)
//         for i := 0; i < n; i++ {
//             xS, _ := in.ReadString(' ')
//             x, _ := strconv.Atoi(xS[:len(xS)-1])
//             arr[i] = x
//             if x <= n {
//                 cnt[x]++
//             }
//         }
//         for i := range cnt {
//             if i > n {
//                 break
//             }
//         }
//         sum := 0
//         pref := 0
//         for k := 1; k <= n; k++ {
//             c := cnt[k]
//             if c == 0 {
//                 pref += cnt[k-1]
//                 continue
//             }
//             sum = int((int64(sum) + int64(c) * int64(p2(c-1)) % M * int64(p2(pref)) % M) % M)
//             pref += c
//         }
//         out.WriteString(strconv.Itoa(sum) + "\n")
//     }
// }

// func p2(n int) int {
//     res := 1
//     b := 2
//     for n > 0 {
//         if n&1 == 1 {
//             res = int(int64(res) * int64(b) % M)
//         }
//         b = int(int64(b) * int64(b) % M)
//         n >>= 1
//     }
//     return res
// }

// const M = 1000000007
// const MaxN = 200000

// var p2 [MaxN + 1]int

// func init() {
//     p2[0] = 1
//     for i := 1; i <= MaxN; i++ {
//         p2[i] = (p2[i-1] << 1) % M
//     }
// }

// func main() {
//     in  := bufio.NewReader(os.Stdin)
//     out := bufio.NewWriter(os.Stdout)
//     defer out.Flush()
//     var T int
//     fmt.Fscan(in, &T)
//     for T > 0 {
//         T--
//         var n int
//         fmt.Fscan(in, &n)
//         cnt := make([]int, n+1)
//         for i := 0; i < n; i++ {
//             var x int
//             fmt.Fscan(in, &x)
//             if x <= n {
//                 cnt[x]++
//             }
//         }
//         sum, pref := 0, 0
//         for k := 1; k <= n; k++ {
//             c := cnt[k]
//             if c > 0 {
//                 ways := int64(c) *
//                     int64(binom(pref+c-1, k-1)) % M *
//                     int64(p2[n-pref-c]) % M
//                 sum = (sum + int(ways)) % M
//             }
//             pref += c
//         }

//         fmt.Fprintln(out, sum)
//     }
// }

// var fact, invfact [MaxN + 1]int

// func init() {
//     fact[0], invfact[0] = 1, 1
//     for i := 1; i <= MaxN; i++ {
//         fact[i] = fact[i-1] * i % M
//     }
//     invfact[MaxN] = modInv(fact[MaxN])
//     for i := MaxN; i > 0; i-- {
//         invfact[i-1] = invfact[i] * i % M
//     }
// }

// func binom(n, r int) int {
//     if r < 0 || r > n {
//         return 0
//     }
//     return fact[n] * (invfact[r] * invfact[n-r] % M) % M
// }

// func modInv(a int) int {
//     res, b := 1, M-2
//     base := a
//     for b > 0 {
//         if b&1 == 1 {
//             res = int(int64(res) * int64(base) % M)
//         }
//         base = int(int64(base) * int64(base) % M)
//         b >>= 1
//     }
//     return res
// }

const M = 1000000007
const MAX = 200000

var f, inv [MAX + 1]int
var p2 [MAX + 1]int

func modInv(a int) int {
	r, b := 1, M-2
	base := a
	for b > 0 {
		if b&1 == 1 {
			r = int(int64(r) * int64(base) % M)
		}
		base = int(int64(base) * int64(base) % M)
		b >>= 1
	}
	return r
}

func init() {
	f[0], inv[0] = 1, 1
	for i := 1; i <= MAX; i++ {
		f[i] = f[i-1] * i % M
	}
	inv[MAX] = modInv(f[MAX])
	for i := MAX; i > 0; i-- {
		inv[i-1] = inv[i] * i % M
	}
	p2[0] = 1
	for i := 1; i <= MAX; i++ {
		p2[i] = (p2[i-1] * 2) % M
	}
}

func c(n, r int) int {
	if r < 0 || r > n {
		return 0
	}
	return f[n] * (inv[r] * inv[n-r] % M) % M
}

func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in, &t)
	for ; t > 0; t-- {
		var n int
		fmt.Fscan(in, &n)
		a := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(in, &a[i])
		}
		sort.Ints(a)
		s := 0
		for i := 1; i <= n; i++ {
			x := a[i-1]
			cb := c(i-1, x-1)
			pw := p2[n-i]
			s = (s + int(int64(cb)*int64(pw)%M)) % M
		}
		fmt.Fprintln(out, s)
	}
}
