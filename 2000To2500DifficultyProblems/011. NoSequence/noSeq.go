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
	sc := bufio.NewScanner(os.Stdin)
	sc.Scan()
	t, _ := strconv.Atoi(sc.Text())
	for t > 0 {
		sc.Scan()
		line := strings.Fields(sc.Text())
		n, _ := strconv.Atoi(line[0])
		k, _ := strconv.Atoi(line[1])
		s, _ := strconv.ParseInt(line[2], 10, 64)
		res := helper(n, k, s)
		if len(res) == 0 {
			fmt.Println(-2)
		} else {
			fmt.Println(strings.Join(res, " "))
		}
		t--
	}
}

func helper(n int, k int, s int64) []string {
	b := make([]int, n)
	a := s
	for i := 0; i < n; i++ {
		mod := a % int64(k)
		if mod < 0 {
			mod += int64(k)
		}
		switch mod {
		case 0:
			b[i] = 0
		case 1:
			b[i] = 1
		default:
			if mod == int64(k)-1 {
				b[i] = -1
			} else {
				return []string{}
			}
		}
		a -= int64(b[i])
		a /= int64(k)
	}
	if a != 0 {
		return []string{}
	}
	res := make([]string, n)
	for i, val := range b {
		res[i] = strconv.Itoa(val)
	}
	return res
}
