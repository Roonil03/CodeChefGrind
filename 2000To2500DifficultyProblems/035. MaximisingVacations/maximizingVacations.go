package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	t, _ := strconv.Atoi(readLine(in))
	for ; t > 0; t-- {
		parts := split(readLine(in))
		n, _ := strconv.Atoi(parts[0])
		X, _ := strconv.Atoi(parts[1])
		S := readLine(in)
		origAns := 0
		runs := []int{}
		len0 := 0
		for i := 0; i < n; i++ {
			if S[i] == '0' {
				len0++
			} else {
				runs = append(runs, len0)
				origAns += len0 / X
				len0 = 0
			}
		}
		runs = append(runs, len0)
		origAns += len0 / X
		pref := make([]int, n+1)
		for i := 0; i < n; i++ {
			if S[i] == '0' {
				pref[i+1] = pref[i] + 1
			}
		}
		suff := make([]int, n+1)
		for i := n - 1; i >= 0; i-- {
			if S[i] == '0' {
				suff[i] = suff[i+1] + 1
			}
		}
		maxGain := 0
		for i := 0; i < n; i++ {
			if S[i] == '1' {
				left := pref[i]
				right := suff[i+1]
				merged := left + 1 + right
				gain := merged/X - left/X - right/X
				if gain > maxGain {
					maxGain = gain
				}
			}
		}
		fmt.Fprintln(out, origAns+maxGain)
	}
}

func readLine(r *bufio.Reader) string {
	line, _ := r.ReadString('\n')
	if len(line) > 0 && line[len(line)-1] == '\n' {
		line = line[:len(line)-1]
	}
	return line
}

func split(s string) []string {
	res := []string{}
	curr := ""
	for _, c := range s {
		if c == ' ' {
			res = append(res, curr)
			curr = ""
		} else {
			curr += string(c)
		}
	}
	return append(res, curr)
}
