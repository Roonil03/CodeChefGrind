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
		var N, K int
		fmt.Fscan(in, &N, &K)
		m := make([]int, N+1)
		half := N / 2
		for i := 1; i <= N; i++ {
			if i&1 == 1 {
				m[i] = (i + 1) / 2
			} else {
				m[i] = half + i/2
			}
		}
		ans := make([]int, N+1)
		vis := make([]bool, N+1)
		for i := 1; i <= N; i++ {
			if !vis[i] {
				cyc := []int{}
				for x := i; !vis[x]; x = m[x] {
					vis[x] = true
					cyc = append(cyc, x)
				}
				l := len(cyc)
				k := K % l
				for j, v := range cyc {
					to := cyc[(j+k)%l]
					ans[to] = v
				}
			}
		}
		for i := 1; i <= N; i++ {
			fmt.Fprint(out, ans[i])
			if i < N {
				out.WriteByte(' ')
			}
		}
		out.WriteByte('\n')
	}
}
