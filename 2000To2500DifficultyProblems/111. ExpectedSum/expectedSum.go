package main

import (
	"bufio"
	"fmt"
	"os"
)

const M = 998244353

func modpow(a, e int64) int64 {
	var res int64 = 1
	for e > 0 {
		if e&1 == 1 {
			res = res * a % M
		}
		a = a * a % M
		e >>= 1
	}
	return res
}

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var T int
	fmt.Fscan(in, &T)
	for T > 0 {
		T--
		var a, b int64
		fmt.Fscan(in, &a, &b)
		n := a + b
		c := (n + 1) / 2
		num := a % M * c % M
		inv := modpow(n%M, M-2)
		ans := num * inv % M
		fmt.Fprintln(out, ans)
	}
}
