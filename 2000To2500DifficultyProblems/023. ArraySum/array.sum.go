package main

import "fmt"

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func main() {
	var t int
	fmt.Scan(&t)
	for t > 0 {
		t--
		var n, k int
		fmt.Scan(&n, &k)
		a := make([]int, n)
		for i := range a {
			a[i] = 1
		}
		for i := 0; i < n; i++ {
			if i >= n/2 {
				a[i]++
			}
			k -= a[i]
		}
		if k < 0 || k%2 != 0 {
			fmt.Println(-1)
		} else {
			for i := 0; i < n; i++ {
				take := min(k, 99998)
				k -= take
				a[i] += take
			}
			if k > 0 {
				fmt.Println(-1)
			} else {
				for i := 0; i < n; i++ {
					fmt.Print(a[i])
					if i < n-1 {
						fmt.Print(" ")
					}
				}
				fmt.Println()
			}
		}
	}
}
