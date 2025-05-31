package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)
	for t > 0 {
		var n, k int
		fmt.Scan(&n, &k)
		arr := make([]int, n)
		sum := 0
		for i := 0; i < n; i++ {
			fmt.Scan(&arr[i])
			sum += arr[i]
		}
		isPalindrome := true
		for i := 0; i < n/2; i++ {
			if arr[i] != arr[n-1-i] {
				isPalindrome = false
				break
			}
		}
		if isPalindrome {
			fmt.Println("YES")
		} else if k == n {
			fmt.Println("NO")
		} else if k%2 == 1 || n%2 == 1 {
			fmt.Println("YES")
		} else {
			if sum%2 == 0 {
				fmt.Println("YES")
			} else {
				fmt.Println("NO")
			}
		}
		t--
	}
}
