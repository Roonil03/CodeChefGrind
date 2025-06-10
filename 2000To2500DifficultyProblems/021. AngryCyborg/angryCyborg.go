package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func readInt(sc *bufio.Scanner) int {
	sc.Scan()
	n, _ := strconv.Atoi(sc.Text())
	return n
}

func main() {
	// your code goes here
	sc := bufio.NewScanner(os.Stdin)
	sc.Split(bufio.ScanWords)
	sc.Buffer(make([]byte, 1024*1024), 1024*1024)
	T := readInt(sc)
	for t := 0; t < T; t++ {
		N := readInt(sc)
		Q := readInt(sc)
		diffA := make([]int64, N+2)
		diffB := make([]int64, N+2)
		for q := 0; q < Q; q++ {
			L := readInt(sc)
			R := readInt(sc)
			diffA[L]++
			if R+1 <= N {
				diffA[R+1]--
			}

			diffB[L] += int64(L)
			if R+1 <= N {
				diffB[R+1] -= int64(L)
			}
		}
		A := make([]int64, N+1)
		B := make([]int64, N+1)
		for i := 1; i <= N; i++ {
			A[i] = A[i-1] + diffA[i]
			B[i] = B[i-1] + diffB[i]
		}
		res := make([]string, N)
		for i := 1; i <= N; i++ {
			total := (int64(i+1) * A[i]) - B[i]
			res[i-1] = strconv.FormatInt(total, 10)
		}
		fmt.Println(strings.Join(res, " "))
	}
}
