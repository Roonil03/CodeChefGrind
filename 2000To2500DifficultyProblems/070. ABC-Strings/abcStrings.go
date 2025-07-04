package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	var s string
	fmt.Fscan(in, &s)
	n := len(s)
	mp := make(map[[2]int64]int64)
	var cA, cB, cC int64
	mp[[2]int64{0, 0}] = 1
	var res int64
	for i := 0; i < n; i++ {
		switch s[i] {
		case 'A':
			cA++
		case 'B':
			cB++
		case 'C':
			cC++
		}
		key := [2]int64{cA - cB, cA - cC}
		res += mp[key]
		mp[key]++
	}
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()
	fmt.Fprint(w, res)
}
