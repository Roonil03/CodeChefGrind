package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

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

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}

func h1(mat [][]int, pre [][]int64, N, M, K, d int) bool {
	need := int64(K + 1)
	for i := 0; i < N; i++ {
		for j := 0; j < M; j++ {
			if mat[i][j] == 0 {
				continue
			}
			top := max(0, i-d)
			bot := min(N-1, i+d)
			lft := max(0, j-d)
			rgt := min(M-1, j+d)
			sum := pre[bot+1][rgt+1] - pre[top][rgt+1] - pre[bot+1][lft] + pre[top][lft]
			if sum >= need {
				return true
			}
		}
	}
	return false
}

func solve(mat [][]int, N, M, K int) int {
	tc := int64(0)
	for i := 0; i < N; i++ {
		for j := 0; j < M; j++ {
			tc += int64(mat[i][j])
		}
	}
	if tc < int64(K+1) {
		return -1
	}
	pre := make([][]int64, N+1)
	for i := range pre {
		pre[i] = make([]int64, M+1)
	}
	for i := 0; i < N; i++ {
		for j := 0; j < M; j++ {
			pre[i+1][j+1] = pre[i+1][j] + pre[i][j+1] - pre[i][j] + int64(mat[i][j])
		}
	}
	l, r := 0, max(N-1, M-1)
	ans := r
	for l <= r {
		m := (l + r) >> 1
		if h1(mat, pre, N, M, K, m) {
			ans = m
			r = m - 1
		} else {
			l = m + 1
		}
	}
	return ans
}

func main() {
	// your code goes here
	sc := bufio.NewScanner(os.Stdin)
	sc.Buffer(make([]byte, 1024), 1<<27)
	sc.Scan()
	T, _ := strconv.Atoi(strings.TrimSpace(sc.Text()))
	for ; T > 0; T-- {
		sc.Scan()
		parts := strings.Fields(sc.Text())
		N, _ := strconv.Atoi(parts[0])
		M, _ := strconv.Atoi(parts[1])
		K, _ := strconv.Atoi(parts[2])
		mat := make([][]int, N)
		for i := 0; i < N; i++ {
			mat[i] = make([]int, M)
			sc.Scan()
			row := strings.Fields(sc.Text())
			for len(row) < M {
				sc.Scan()
				row = append(row, strings.Fields(sc.Text())...)
			}
			for j := 0; j < M; j++ {
				mat[i][j], _ = strconv.Atoi(row[j])
			}
		}
		fmt.Println(solve(mat, N, M, K))
	}
}
