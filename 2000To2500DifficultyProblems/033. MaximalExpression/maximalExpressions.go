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
		var N, K int64
		fmt.Fscan(r, &N, &K)
		var x int64
		if N < K {
			x = N / 2
		} else {
			m := N % K
			if m == K-1 {
				x = m / 2
			} else {
				x = (K + m) / 2
			}
		}
		fmt.Fprintln(w, x)
	}
}
