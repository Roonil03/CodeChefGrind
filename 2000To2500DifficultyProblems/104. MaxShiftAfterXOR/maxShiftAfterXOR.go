package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var T int
	fmt.Fscan(in, &T)
	for T > 0 {
		T--
		var n int
		fmt.Fscan(in, &n)
		a := make([]uint64, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(in, &a[i])
		}
		x := make([]uint64, n+1)
		for i := 1; i <= n; i++ {
			x[i] = x[i-1] ^ a[i-1]
		}
		tot := x[n]
		sx := make(map[uint64]int)
		for i := 1; i <= n; i++ {
			sx[x[i]]++
		}
		ps := make(map[uint64]struct{})
		mp2 := make(map[uint64]struct{})
		var pre, suf, ov, ans int
		suf = len(sx)
		for p := 0; p <= n-1; p++ {
			c := pre + suf - ov
			if c > ans {
				ans = c
			}
			v := x[p+1]
			if cnt, ok := sx[v]; ok {
				if cnt == 1 {
					delete(sx, v)
					suf--
					if _, ok2 := mp2[v]; ok2 {
						ov--
					}
				} else {
					sx[v] = cnt - 1
				}
			}
			if _, ok := ps[v]; !ok {
				ps[v] = struct{}{}
				pre++
				m := tot ^ v
				mp2[m] = struct{}{}
				if _, ok2 := sx[m]; ok2 {
					ov++
				}
			}
		}
		fmt.Fprintln(out, ans)
	}
}
