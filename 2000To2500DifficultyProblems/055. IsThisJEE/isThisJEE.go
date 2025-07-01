package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

func f(x, b, c float64) float64 {
	return (x*x + b*x + c) / math.Sin(x)
}

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in, &t)
	for t > 0 {
		t--
		var b, c float64
		fmt.Fscan(in, &b, &c)
		l, r := 0.0, math.Pi/2
		for i := 0; i < 60; i++ {
			m1 := l + (r-l)/3
			m2 := r - (r-l)/3
			if f(m1, b, c) > f(m2, b, c) {
				l = m1
			} else {
				r = m2
			}
		}
		ans := f((l+r)/2, b, c)
		fmt.Fprintf(out, "%.10f\n", ans)
	}
}
