package main

import (
	"bufio"
	"io"
	"os"
)

var d []byte
var ptr int
var w *bufio.Writer

func main() {
	d, _ = io.ReadAll(os.Stdin)
	ptr = 0
	w = bufio.NewWriter(os.Stdout)
	defer w.Flush()
	t := int(read())
	for i := 0; i < t; i++ {
		a := read()
		b := read()
		if helper(a, b) {
			w.WriteString("YES\n")
		} else {
			w.WriteString("NO\n")
		}
	}
}

func read() int64 {
	var n int64
	for ptr < len(d) && (d[ptr] < '0' || d[ptr] > '9') {
		ptr++
	}
	for ; ptr < len(d) && d[ptr] >= '0' && d[ptr] <= '9'; ptr++ {
		n = n*10 + int64(d[ptr]-'0')
	}
	return n
}

func helper(a, b int64) bool {
	for b > 1 {
		g := gcd(a, b)
		if g == 1 {
			return false
		}
		for b%g == 0 {
			b /= g
		}
	}
	return true
}

func gcd(a, b int64) int64 {
	for b != 0 {
		a, b = b, a%b
	}
	return a
}
