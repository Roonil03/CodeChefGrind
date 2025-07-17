package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	var t int
	fmt.Fscan(in, &t)
	for ; t > 0; t-- {
		var n int
		fmt.Fscan(in, &n)
		mp := make(map[int][]int)
		for i := 1; i <= n; i++ {
			var x int
			fmt.Fscan(in, &x)
			mp[x] = append(mp[x], i)
		}
		var ans int64
		for v, p := range mp {
			k := len(p)
			if v > k {
				continue
			}
			q := make([]int, k+2)
			q[0] = 0
			for i := 0; i < k; i++ {
				q[i+1] = p[i]
			}
			q[k+1] = n + 1
			for a := 1; a <= k-v+1; a++ {
				b := a + v - 1
				l := q[a] - q[a-1]
				r := q[b+1] - q[b]
				ans += int64(v) * int64(l) * int64(r)
			}
		}
		fmt.Println(ans)
	}
}
