package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var T int
	fmt.Fscan(in, &T)
	const mod = 1000000007
	for T > 0 {
		T--
		var n int
		fmt.Fscan(in, &n)
		in.ReadString('\n')
		var s [101][]int
		for i := 0; i < n; i++ {
			line, _ := in.ReadString('\n')
			for _, f := range strings.Fields(line) {
				x, _ := strconv.Atoi(f)
				s[x] = append(s[x], i)
			}
		}
		M := 1 << n
		dp := make([]int, M)
		dp[0] = 1
		for id := 1; id <= 100; id++ {
			for mask := M - 1; mask >= 0; mask-- {
				for _, p := range s[id] {
					bit := 1 << p
					if mask&bit != 0 {
						dp[mask] = (dp[mask] + dp[mask^bit]) % mod
					}
				}
			}
		}
		fmt.Fprintln(out, dp[M-1])
	}
}
