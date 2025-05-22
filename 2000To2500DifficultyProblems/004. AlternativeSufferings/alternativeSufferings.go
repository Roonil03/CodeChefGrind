package main

import (
	"fmt"
	"math"
)

func main() {
	// your code goes here
	var t int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		var n, k int
		var s string
		fmt.Scan(&n, &k)
		fmt.Scan(&s)
		if k == 0 {
			fmt.Println(s)
			continue
		}
		c := []byte(s)
		nx := make([]byte, n)
		copy(nx, c)
		for j := 0; j < n; j++ {
			if c[j] == '1' {
				nx[j] = '0'
				if j > 0 && c[j-1] == '0' {
					nx[j-1] = '1'
				}
				if j < n-1 && c[j+1] == '0' {
					nx[j+1] = '1'
				}
			}
		}
		c = nx
		k--
		if k == 0 {
			fmt.Println(string(c))
			continue
		}
		ld := make([]int, n)
		rd := make([]int, n)
		for j := 0; j < n; j++ {
			ld[j] = math.MaxInt32
			rd[j] = math.MaxInt32
		}
		last := math.MinInt32
		for j := 0; j < n; j++ {
			if c[j] == '1' {
				last = j
			}
			if last != math.MinInt32 {
				ld[j] = j - last
			}
		}
		last = math.MaxInt32
		for j := n - 1; j >= 0; j-- {
			if c[j] == '1' {
				last = j
			}
			if last != math.MaxInt32 {
				rd[j] = last - j
			}
		}
		res := make([]byte, n)
		for j := 0; j < n; j++ {
			d := ld[j]
			if rd[j] < d {
				d = rd[j]
			}
			if d > k {
				res[j] = '0'
			} else {
				if (k-d)%2 == 0 {
					res[j] = '1'
				} else {
					res[j] = '0'
				}
			}
		}
		fmt.Println(string(res))
	}
}
