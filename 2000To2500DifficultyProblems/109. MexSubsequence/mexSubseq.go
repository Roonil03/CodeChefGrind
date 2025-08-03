package main

import (
	"bufio"
	"fmt"
	"os"
)

const MOD = 1000000007

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var T int
	fmt.Fscan(in, &T)
	for T > 0 {
		T--
		var N int
		fmt.Fscan(in, &N)
		a := make([]int, N)
		for i := range a {
			fmt.Fscan(in, &a[i])
		}
		seen := make([]bool, N+1)
		for _, v := range a {
			if v <= N {
				seen[v] = true
			}
		}
		m := 0
		for seen[m] {
			m++
		}
		if m == 0 {
			res := 1
			cnt := 0
			for _, v := range a {
				if v == 0 {
					if cnt > 0 {
						res = int(int64(res) * int64(modPow(2, cnt-1)) % MOD)
					}
					cnt = 0
				} else {
					cnt++
				}
			}
			if cnt > 0 {
				res = int(int64(res) * int64(modPow(2, cnt-1)) % MOD)
			}
			fmt.Fprintln(out, res)
			continue
		}
		nextM := make([]int, N+1)
		next := N
		for i := N - 1; i >= 0; i-- {
			if a[i] == m {
				next = i
			}
			nextM[i] = next
		}
		nextM[N] = N
		need := make([]int, m)
		cntNeed := m
		R := make([]int, N)
		right := 0
		for i := 0; i < N; i++ {
			for right < N && cntNeed > 0 {
				x := a[right]
				if x < m {
					if need[x] == 0 {
						cntNeed--
					}
					need[x]++
				}
				right++
			}
			if cntNeed == 0 {
				R[i] = right - 1
			} else {
				R[i] = N
			}
			x := a[i]
			if x < m {
				need[x]--
				if need[x] == 0 {
					cntNeed++
				}
			}
		}
		dp := make([]int, N+2)
		ps := make([]int, N+2)
		dp[N] = 1
		ps[N] = 1
		for i := N - 1; i >= 0; i-- {
			if R[i] < nextM[i] {
				l := R[i] + 1
				r := nextM[i]
				dp[i] = ps[l]
				if r+1 <= N {
					dp[i] = (dp[i] - ps[r+1] + MOD) % MOD
				}
			}
			ps[i] = modAdd(ps[i+1], dp[i])
		}
		fmt.Fprintln(out, dp[0])
	}
}

func modAdd(a, b int) int {
	a += b
	if a >= MOD {
		a -= MOD
	}
	return a
}

func modPow(a, e int) int {
	r := 1
	for e > 0 {
		if e&1 == 1 {
			r = int(int64(r) * int64(a) % MOD)
		}
		a = int(int64(a) * int64(a) % MOD)
		e >>= 1
	}
	return r
}
