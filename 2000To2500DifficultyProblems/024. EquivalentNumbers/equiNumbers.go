package main

import (
	// "fmt"
	"bufio"
	"os"
)

var sc = bufio.NewScanner(os.Stdin)
var wr = bufio.NewWriter(os.Stdout)

func init() {
	buf := make([]byte, 1024*1024)
	sc.Buffer(buf, 1024*1024)
	sc.Split(bufio.ScanWords)
}

func main() {
	// your code goes here
	defer wr.Flush()
	T := nextInt()
	for i := 0; i < T; i++ {
		A := nextInt()
		B := nextInt()
		if isEquivalent(A, B) {
			wr.WriteString("YES\n")
		} else {
			wr.WriteString("NO\n")
		}
	}
}

func nextInt() int {
	sc.Scan()
	x := 0
	for _, b := range sc.Bytes() {
		x = x*10 + int(b-'0')
	}
	return x
}

func gcd(a, b int) int {
	for b != 0 {
		a, b = b, a%b
	}
	return a
}

func primeFactors(n int) map[int]int {
	factors := make(map[int]int)
	d := 2
	for d*d <= n {
		for n%d == 0 {
			factors[d]++
			n /= d
		}
		d++
	}
	if n > 1 {
		factors[n]++
	}
	return factors
}

func isEquivalent(A, B int) bool {
	factorsA := primeFactors(A)
	factorsB := primeFactors(B)
	allPrimes := make(map[int]bool)
	for p := range factorsA {
		allPrimes[p] = true
	}
	for p := range factorsB {
		allPrimes[p] = true
	}
	var firstNum, firstDen int
	first := true
	for p := range allPrimes {
		aExp, aExists := factorsA[p]
		bExp, bExists := factorsB[p]
		if aExists != bExists {
			return false
		}
		if aExists && bExists {
			if first {
				g := gcd(bExp, aExp)
				firstNum = bExp / g
				firstDen = aExp / g
				first = false
			} else {
				g := gcd(bExp, aExp)
				reducedNum := bExp / g
				reducedDen := aExp / g
				if reducedNum != firstNum || reducedDen != firstDen {
					return false
				}
			}
		}
	}
	return true
}
