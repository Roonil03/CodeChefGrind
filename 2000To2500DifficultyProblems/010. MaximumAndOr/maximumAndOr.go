package main

import (
	"bufio"
	"fmt"
	"math/bits"
	"os"
	"strconv"
	"strings"
)

func main() {
	// your code goes here
	r := bufio.NewReader(os.Stdin)
	tL, _, _ := r.ReadLine()
	t, _ := strconv.Atoi(string(tL))
	for i := 0; i < t; i++ {
		a, b := read(r)
		fmt.Println(cal(a, b))
	}
}

func cal(a, b int) int {
	x := a ^ b
	c := bits.OnesCount(uint(x))
	return 1 << c
}

func read(r *bufio.Reader) (int, int) {
	l, _, _ := r.ReadLine()
	p := strings.Fields(string(l))
	a, _ := strconv.Atoi(p[0])
	b, _ := strconv.Atoi(p[1])
	return a, b
}
