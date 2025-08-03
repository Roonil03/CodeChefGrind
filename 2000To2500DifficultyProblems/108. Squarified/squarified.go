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
	tests := make([][]int, T)
	mx := 0
	for i := 0; i < T; i++ {
		var n int
		fmt.Fscan(in, &n)
		a := make([]int, n)
		for j := 0; j < n; j++ {
			fmt.Fscan(in, &a[j])
			if a[j] > mx {
				mx = a[j]
			}
		}
		tests[i] = a
	}
	spf := make([]int, mx+1)
	for i := 2; i <= mx; i++ {
		if spf[i] == 0 {
			for j := i; j <= mx; j += i {
				if spf[j] == 0 {
					spf[j] = i
				}
			}
		}
	}
	for _, a := range tests {
		m := make(map[int]int)
		best := 0
		for _, v := range a {
			x, res := v, 1
			for x > 1 {
				p := spf[x]
				c := 0
				for x%p == 0 {
					x /= p
					c ^= 1
				}
				if c == 1 {
					res *= p
				}
			}
			if res > 1 {
				m[res]++
				if m[res] > best {
					best = m[res]
				}
			}
		}
		fmt.Fprintln(out, best)
	}
}
