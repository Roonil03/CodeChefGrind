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
	var t int
	fmt.Fscan(in, &t)
	for t > 0 {
		t--
		var n int
		fmt.Fscan(in, &n)
		var s string
		fmt.Fscan(in, &s)
		ans := make([]byte, n)
		lr, lp, ls := -1, -1, -1
		for i := n - 1; i >= 0; i-- {
			c := s[i]
			var q int
			if c == 'R' {
				q = lp
			} else if c == 'P' {
				q = ls
			} else {
				q = lr
			}
			if q == -1 {
				ans[i] = c
			} else {
				ans[i] = ans[q]
			}
			if c == 'R' {
				lr = i
			} else if c == 'P' {
				lp = i
			} else {
				ls = i
			}
		}
		fmt.Fprintln(out, string(ans))
	}
}
