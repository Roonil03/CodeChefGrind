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
	Ns := make([]int, T)
	Ks := make([]int, T)
	mx := 0
	for i := 0; i < T; i++ {
		fmt.Fscan(in, &Ns[i], &Ks[i])
		if Ns[i] > mx {
			mx = Ns[i]
		}
	}
	isP := make([]bool, mx+1)
	for i := 2; i <= mx; i++ {
		isP[i] = true
	}
	for i := 2; i*i <= mx; i++ {
		if isP[i] {
			for j := i * i; j <= mx; j += i {
				isP[j] = false
			}
		}
	}
	for ti := 0; ti < T; ti++ {
		N, K := Ns[ti], Ks[ti]
		h := N / 2
		cnt := 0
		for i := h + 1; i <= N; i++ {
			if isP[i] {
				cnt++
			}
		}
		sz := cnt + 1
		c0 := N - 1 - cnt
		if !(K <= sz || K >= c0) || K == 0 || K == N {
			fmt.Fprintln(out, "NO")
			continue
		}
		fmt.Fprintln(out, "YES")
		S := make([]int, 0, sz)
		S = append(S, 1)
		for i := h + 1; i <= N; i++ {
			if isP[i] {
				S = append(S, i)
			}
		}
		if K <= sz {
			for i := 0; i < K; i++ {
				if i > 0 {
					out.WriteByte(' ')
				}
				fmt.Fprint(out, S[i])
			}
			out.WriteByte('\n')
		} else {
			rem := K - c0
			first := true
			for i := 1; i <= N; i++ {
				if i == 1 {
					continue
				}
				if i > h && isP[i] {
					continue
				}
				if !first {
					out.WriteByte(' ')
				}
				first = false
				fmt.Fprint(out, i)
			}
			for i := 0; i < rem; i++ {
				out.WriteByte(' ')
				fmt.Fprint(out, S[i])
			}
			out.WriteByte('\n')
		}
	}
}
