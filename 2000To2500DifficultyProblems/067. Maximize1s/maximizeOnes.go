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
	var T int
	fmt.Fscan(r, &T)
	for T > 0 {
		T--
		var s string
		fmt.Fscan(r, &s)
		n := len(s)
		var sm, cur, bst int64
		for i, ch := range s {
			pos := int64(i + 1)
			wgt := pos * int64(n-i)
			if ch == '0' {
				cur += wgt
			} else {
				sm += wgt
				cur -= wgt
			}
			if cur < 0 {
				cur = 0
			}
			if cur > bst {
				bst = cur
			}
		}
		fmt.Fprintln(w, sm+bst)
	}
}
