package main

import "fmt"

const MOD = 1000000007
const maxL = 100000

var result [maxL + 1]int

func precompute() {
	dp := make([][2]int, maxL+1)
	dp[0][0] = 1

	for i := 0; i < maxL; i++ {
		for player := 0; player < 2; player++ {
			if dp[i][player] == 0 {
				continue
			}
			for clear := 1; clear <= 4; clear++ {
				next := i + clear
				if next > maxL {
					continue
				}
				if clear == 1 {
					dp[next][1-player] = (dp[next][1-player] + dp[i][player]) % MOD
				} else {
					dp[next][player] = (dp[next][player] + dp[i][player]) % MOD
				}
			}
		}
	}

	for L := 1; L <= maxL; L++ {
		total := 0
		for i := max(0, L-4); i < L; i++ {
			total = (total + dp[i][0]) % MOD
		}
		result[L] = total
	}
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func solve(L int) int {
	return result[L]
}

func main() {
	// your code goes here
	precompute()

	var T int
	fmt.Scan(&T)

	for t := 0; t < T; t++ {
		var L int
		fmt.Scan(&L)
		fmt.Println(solve(L))
	}
}
