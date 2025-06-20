package main

import (
	"bufio"
	"os"
	"sort"
	"strconv"
)

func main() {
	r := bufio.NewReader(os.Stdin)
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()
	t := readI(r)
	for ; t > 0; t-- {
		n := readI(r)
		a := make([]int64, n)
		b := make([]int64, n)
		for i := 0; i < n; i++ {
			a[i] = readL(r)
		}
		for i := 0; i < n; i++ {
			b[i] = readL(r)
		}
		idx := make([]int, n)
		for i := 0; i < n; i++ {
			idx[i] = i
		}
		sort.Slice(idx, func(i, j int) bool {
			return a[idx[i]]*b[idx[j]] > a[idx[j]]*b[idx[i]]
		})
		var s, ans int64
		for _, i := range idx {
			ans += s * b[i]
			s += a[i]
		}
		w.WriteString(strconv.FormatInt(ans, 10))
		w.WriteByte('\n')
	}
}
func readI(r *bufio.Reader) int {
	b, _ := r.ReadBytes(' ')
	x := 0
	for _, c := range b {
		if c >= '0' && c <= '9' {
			x = x*10 + int(c-'0')
		}
	}
	return x
}
func readL(r *bufio.Reader) int64 {
	b, _ := r.ReadBytes(' ')
	var x int64
	for _, c := range b {
		if c >= '0' && c <= '9' {
			x = x*10 + int64(c-'0')
		}
	}
	return x
}
