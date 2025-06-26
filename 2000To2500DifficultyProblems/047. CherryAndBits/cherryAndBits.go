package main

import (
	"bufio"
	"os"
)

func main() {
	// your code goes here
	r := bufio.NewReaderSize(os.Stdin, 1<<20)
	w := bufio.NewWriterSize(os.Stdout, 1<<20)
	defer w.Flush()
	var g = func() int {
		s, v := 1, 0
		c, _ := r.ReadByte()
		for (c < '0' || c > '9') && c != '-' {
			c, _ = r.ReadByte()
		}
		if c == '-' {
			s = -1
			c, _ = r.ReadByte()
		}
		for c >= '0' && c <= '9' {
			v = v*10 + int(c-'0')
			c, _ = r.ReadByte()
		}
		return v * s
	}
	n, m := g(), g()
	a := make([][]byte, n)
	for i := 0; i < n; i++ {
		row := make([]byte, m)
		k := 0
		for k < m {
			c, _ := r.ReadByte()
			if c == '0' || c == '1' {
				row[k] = c
				k++
			}
		}
		a[i] = row
	}
	d := make([][]int, n+2)
	for i := range d {
		d[i] = make([]int, m+2)
	}
	q := g()
	for ; q > 0; q-- {
		x1, y1, x2, y2 := g()-1, g()-1, g(), g()
		d[x1][y1]++
		d[x1][y2]--
		d[x2][y1]--
		d[x2][y2]++
	}
	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			if i > 0 {
				d[i][j] += d[i-1][j]
			}
			if j > 0 {
				d[i][j] += d[i][j-1]
			}
			if i > 0 && j > 0 {
				d[i][j] -= d[i-1][j-1]
			}
			if d[i][j]&1 == 1 {
				if a[i][j] == '0' {
					a[i][j] = '1'
				} else {
					a[i][j] = '0'
				}
			}
		}
	}
	for i := 0; i < n; i++ {
		w.Write(a[i])
		w.WriteByte('\n')
	}
}
