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
		var n int
		fmt.Fscan(r, &n)
		a := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(r, &a[i])
		}
		stk := make([]int, 0, n)
		m := make(map[int]struct{})
		for _, v := range a {
			for len(stk) > 0 && stk[len(stk)-1] < v {
				d := v - stk[len(stk)-1]
				m[d] = struct{}{}
				stk = stk[:len(stk)-1]
			}
			if len(stk) > 0 {
				d := stk[len(stk)-1] - v
				m[d] = struct{}{}
			}
			stk = append(stk, v)
		}
		fmt.Fprintln(w, len(m))
	}
}
