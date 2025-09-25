package main

import "fmt"

func main() {
	// your code goes here
	var r, c, e int
	fmt.Scanf("%d %d %d", &r, &c, &e)
	res := (r + e) * c
	fmt.Println(res)
}
