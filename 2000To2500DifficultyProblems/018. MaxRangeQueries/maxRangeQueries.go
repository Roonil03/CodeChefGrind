package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	r := bufio.NewReader(os.Stdin)
	var T int
	fmt.Fscan(r, &T)
	for t := 0; t < T; t++ {
		var N, K int
		fmt.Fscan(r, &N, &K)
		ops := make([][2]int, N)
		maxR := 0
		for i := 0; i < N; i++ {
			var L, R int
			fmt.Fscan(r, &L, &R)
			ops[i] = [2]int{L, R}
			if R > maxR {
				maxR = R
			}
		}
		diff := make([]int, maxR+2)
		for i := 0; i < N; i++ {
			L, R := ops[i][0], ops[i][1]
			diff[L]++
			diff[R+1]--
		}
		cur := 0
		pfxK := make([]int, maxR+2)
		pfxP := make([]int, maxR+2)
		cntK := 0
		for i := 1; i <= maxR; i++ {
			cur += diff[i]
			pfxK[i] = pfxK[i-1]
			pfxP[i] = pfxP[i-1]
			if cur == K {
				cntK++
				pfxK[i]++
			} else if cur == K+1 {
				pfxP[i]++
			}
		}
		max := 0
		for i := 0; i < N; i++ {
			L, R := ops[i][0], ops[i][1]
			new := cntK - (pfxK[R] - pfxK[L-1]) + (pfxP[R] - pfxP[L-1])
			if i == 0 || new > max {
				max = new
			}
		}
		fmt.Println(max)
	}
}
