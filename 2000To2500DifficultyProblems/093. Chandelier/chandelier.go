package main

import (
	"bufio"
	"fmt"
	"os"
)

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
		W := make([]int64, N+2)
		A := make([]int64, N+2)
		D := make([]int64, N+2)
		for i := 1; i <= N; i++ {
			fmt.Fscan(in, &W[i])
		}
		for i := 1; i <= N; i++ {
			fmt.Fscan(in, &A[i])
			D[i] = A[i] - W[i]
		}
		needLeft := make([]int64, N+2)
		needLeft[0] = 0
		for i := 1; i <= N; i++ {
			req := needLeft[i-1] - W[i]
			if req < 0 {
				req = 0
			}
			if D[i] > req {
				needLeft[i] = D[i]
			} else {
				needLeft[i] = req
			}
		}
		needRight := make([]int64, N+2)
		needRight[N+1] = 0
		for i := N; i >= 1; i-- {
			req := needRight[i+1] - W[i]
			if req < 0 {
				req = 0
			}
			if D[i] > req {
				needRight[i] = D[i]
			} else {
				needRight[i] = req
			}
		}
		for i := 1; i <= N; i++ {
			sum := needLeft[i-1] + needRight[i+1]
			x1 := D[i]
			x2 := sum - W[i]
			if x2 < 0 {
				x2 = 0
			}
			if x1 > x2 {
				fmt.Fprint(out, x1)
			} else {
				fmt.Fprint(out, x2)
			}
			if i < N {
				fmt.Fprint(out, " ")
			}
		}
		fmt.Fprintln(out)
	}
}
