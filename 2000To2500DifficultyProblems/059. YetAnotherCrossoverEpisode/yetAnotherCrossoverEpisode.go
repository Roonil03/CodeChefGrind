package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	br := bufio.NewReader(os.Stdin)
	bw := bufio.NewWriter(os.Stdout)
	defer bw.Flush()
	var T int
	fmt.Fscan(br, &T)
	const K = 33333
	for ; T > 0; T-- {
		var D int
		fmt.Fscan(br, &D)
		if D == 0 {
			fmt.Fprint(bw, 1, "\n", 1, "\n")
			continue
		}
		m := D / K
		r := D - m*K
		a := make([]int, 0, 3*m+3)
		for i := 0; i < m; i++ {
			a = append(a, 3*K, 2*K, 1)
		}
		if r > 0 {
			a = append(a, 3*r, 2*r, 1)
		}
		fmt.Fprint(bw, len(a), "\n")
		for i, v := range a {
			if i > 0 {
				fmt.Fprint(bw, " ")
			}
			fmt.Fprint(bw, v)
		}
		fmt.Fprint(bw, "\n")
	}
}
