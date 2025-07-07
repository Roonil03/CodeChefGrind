package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscanf(in, "%d\n", &t)
	for t > 0 {
		var b, w int
		fmt.Fscanf(in, "%d %d\n", &b, &w)
		if b+w == 1 {
			if b == 1 {
				fmt.Fprintln(out, "B")
			} else {
				fmt.Fprintln(out, "W")
			}
		} else if b == 0 || w == 0 {
			fmt.Fprintln(out, "-1")
		} else {
			s := strings.Repeat("B", b) + strings.Repeat("W", w)
			fmt.Fprintln(out, s)
			for i := 1; i < b+w; i++ {
				if b == 1 {
					fmt.Fprintf(out, "%d %d\n", 1, i+1)
				} else {
					fmt.Fprintf(out, "%d %d\n", i, b+w)
				}
			}
		}
		t--
	}
}
