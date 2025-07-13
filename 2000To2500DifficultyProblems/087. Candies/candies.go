package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	r := bufio.NewReader(os.Stdin)
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()
	var t int
	fmt.Fscan(r, &t)
	for t > 0 {
		t--
		var n, m int
		fmt.Fscan(r, &n, &m)

		f := make([]int, m+1)
		for i := 0; i < n; i++ {
			var x int
			fmt.Fscan(r, &x)
			f[x]++
		}
		pf := make([]int, m+1)
		for i := 1; i <= m; i++ {
			pf[i] = pf[i-1] + f[i]
		}
		c := make([]int, m)
		for i := 0; i < m; i++ {
			fmt.Fscan(r, &c[i])
		}
		mx := 0
		for p := 1; p <= m; p++ {
			s := 0
			for k := 1; k <= m/p; k++ {
				l := k * p
				r := k*p + p - 1
				if r > m {
					r = m
				}
				s += k * (pf[r] - pf[l-1])
			}
			b := s * c[p-1]
			if b > mx {
				mx = b
			}
		}
		fmt.Fprintln(w, mx)
	}
}
