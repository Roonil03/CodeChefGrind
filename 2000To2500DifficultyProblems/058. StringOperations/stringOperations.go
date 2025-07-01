package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	r := bufio.NewReader(os.Stdin)
	var T int
	fmt.Fscan(r, &T)
	for T > 0 {
		T--
		var s string
		fmt.Fscan(r, &s)
		n := len(s)
		P := make([]int, n+1)
		for i := 0; i < n; i++ {
			P[i+1] = P[i] + int(s[i]-'0')
		}
		A := make([]int, n+1)
		C := make([]int, n+1)
		for i := 0; i <= n; i++ {
			A[i] = P[i] & 1
			if i > 0 {
				C[i] = C[i-1] + A[i]
			}
		}
		m := make(map[int]struct{})
		for l := 0; l < n; l++ {
			for r := l; r < n; r++ {
				x := r - l + 1
				y := P[r+1] - P[l]
				var z int
				if A[l] == 0 {
					z = C[r+1] - C[l]
				} else {
					z = (r + 1 - l) - (C[r+1] - C[l])
				}
				m[x<<20|y<<10|z] = struct{}{}
			}
		}
		fmt.Println(len(m))
	}
}
