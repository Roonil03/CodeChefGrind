package main

import (
	"bufio"
	"fmt"
	"os"
	//     "sort"
	// 	"strconv"
	// 	"strings"
)

type uf struct{ p []int }

func (u uf) find(x int) int {
	if u.p[x] != x {
		u.p[x] = u.find(u.p[x])
	}
	return u.p[x]
}

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	var T, n int
	fmt.Fscan(in, &T)
	for ; T > 0; T-- {
		fmt.Fscan(in, &n)
		a := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(in, &a[i])
		}
		if n == 1 {
			fmt.Println(0)
			continue
		}
		p := make([]int, n)
		for i := range p {
			p[i] = i
		}
		u := uf{p}
		ans := 0
		for b := 0; b < 30; b++ {
			w := 1 << b
			first := -1
			for i := 0; i < n; i++ {
				if a[i]&w == 0 {
					continue
				}
				if first == -1 {
					first = i
					continue
				}
				x, y := u.find(first), u.find(i)
				if x != y {
					u.p[x] = y
					ans += w
				}
			}
		}
		root := u.find(0)
		ok := true
		for i := 1; i < n && ok; i++ {
			if u.find(i) != root {
				ok = false
			}
		}
		if ok {
			fmt.Println(ans)
		} else {
			fmt.Println(-1)
		}
	}
}
