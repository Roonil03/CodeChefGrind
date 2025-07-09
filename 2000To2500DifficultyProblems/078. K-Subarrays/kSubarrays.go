package main

import (
	"bufio"
	"fmt"
	"os"
)

const inf = int64(-4e18)

func main() {
	// your code goes here
	r := bufio.NewReaderSize(os.Stdin, 1<<20)
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()
	t := ri(r)
	for ; t > 0; t-- {
		n, k := ri(r), ri(r)
		a := make([]int, n)
		for i := 0; i < n; i++ {
			a[i] = ri(r)
		}
		dp := make([][]int64, n+1)
		pre := make([][]int64, n+1)
		for i := 0; i <= n; i++ {
			dp[i] = make([]int64, k+1)
			pre[i] = make([]int64, k+1)
			for j := 1; j <= k; j++ {
				dp[i][j] = inf
				pre[i][j] = inf
			}
		}
		for i := 0; i <= n; i++ {
			pre[i][0] = 0
			dp[i][0] = 0
		}
		for i := 1; i <= n; i++ {
			for j := 1; j <= k; j++ {
				dp[i][j] = mx(dp[i-1][j], pre[i-1][j-1]) + int64(a[i-1])*int64(j)
				pre[i][j] = mx(pre[i-1][j], dp[i][j])
			}
		}
		fmt.Fprintln(w, pre[n][k])
	}
}

func ri(r *bufio.Reader) int {
	v, s, b := 0, 1, byte(0)
	for b < '0' || b > '9' {
		b, _ = r.ReadByte()
		if b == '-' {
			s = -1
			b, _ = r.ReadByte()
			break
		}
	}
	for b >= '0' && b <= '9' {
		v = v*10 + int(b-'0')
		b, _ = r.ReadByte()
	}
	return v * s
}

func mx(a, b int64) int64 {
	if a > b {
		return a
	}
	return b
}
