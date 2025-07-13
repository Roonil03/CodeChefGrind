package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

func main() {
	// your code goes here
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	t, _ := strconv.Atoi(s.Text())
	for t > 0 {
		s.Scan()
		n, _ := strconv.Atoi(s.Text())
		p := make([][2]int, n)
		for i := 0; i < n; i++ {
			s.Scan()
			var a, b int
			fmt.Sscanf(s.Text(), "%d %d", &a, &b)
			p[i] = [2]int{a, b}
		}
		fmt.Println(solve(p))
		t--
	}
}

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func solve(p [][2]int) int {
	n := len(p)
	pairs := make([][2]int, 0, 2*n)
	m := 0
	for i := 0; i < n; i++ {
		a, b := p[i][0], p[i][1]
		pairs = append(pairs, [2]int{a, i})
		pairs = append(pairs, [2]int{b, i})
		m = max(m, min(a, b))
	}
	sort.Slice(pairs, func(i, j int) bool {
		return pairs[i][0] < pairs[j][0]
	})
	ans := int(1e9)
	for i := 0; i < 2*n; i++ {
		if pairs[i][0] < m {
			continue
		}
		if i > 0 {
			if pairs[i][1] == pairs[i-1][1] {
				if i >= 2 {
					ans = min(ans, pairs[i][0]-pairs[i-2][0])
				}
			} else {
				ans = min(ans, pairs[i][0]-pairs[i-1][0])
			}
		}
	}
	return ans
}
