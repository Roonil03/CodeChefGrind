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
		var n, c int
		var s string
		fmt.Fscan(in, &n, &c, &s)
		first, prev, cnt, bad := -1, -1, 0, 0
		for i := 0; i < n; i++ {
			if s[i] == '1' {
				if cnt == 0 {
					first, prev = i, i
				} else {
					if d := i - prev - 1; d > c {
						bad++
					}
					prev = i
				}
				cnt++
			}
		}
		if cnt > 1 {
			if d := (n - prev - 1) + first; d > c {
				bad++
			}
		}
		if cnt <= 1 || bad <= 1 {
			fmt.Fprintln(out, "YES")
		} else {
			fmt.Fprintln(out, "NO")
		}
	}
}
