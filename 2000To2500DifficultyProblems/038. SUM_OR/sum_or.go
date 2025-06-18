package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()
	var t int
	fmt.Fscan(os.Stdin, &t)
	for i := 0; i < t; i++ {
		var n int64
		fmt.Fscan(os.Stdin, &n)
		fmt.Fprintln(w, s(n))
	}
}

func c(n int64) int {
	r := 0
	for n > 0 {
		r += int(n & 1)
		n >>= 1
	}
	return r
}

func p(b, e, m int64) int64 {
	if e == 0 {
		return 1
	}
	h := p(b, e/2, m)
	if e%2 == 0 {
		return (h * h) % m
	}
	return (((h * h) % m) * b) % m
}

func s(n int64) int64 {
	const M int64 = 1000000007
	k := c(n)
	if k <= 2 {
		return 0
	}
	t := p(3, int64(k), M)
	o := (3 * p(2, int64(k), M)) % M
	r := (t - o + 3) % M
	if r < 0 {
		r += M
	}
	return r
}
