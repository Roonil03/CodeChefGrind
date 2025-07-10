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
	var t, n int
	fmt.Fscan(r, &t)
	for t > 0 {
		t--
		fmt.Fscan(r, &n)
		a := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(r, &a[i])
		}
		d := make([]int, n)
		for i, j := 0, n-1; i < j; i, j = i+1, j-1 {
			if a[i] < a[j] {
				d[i] = a[j] - a[i]
			} else {
				d[j] = a[i] - a[j]
			}
		}
		var ans, pr int
		for i := 0; i < n; i++ {
			if d[i] > pr {
				ans += d[i] - pr
			}
			pr = d[i]
		}
		fmt.Fprintln(w, ans)
	}
}
