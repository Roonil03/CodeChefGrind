package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	sc := bufio.NewScanner(os.Stdin)
	sc.Scan()
	var x, y int
	fmt.Sscanf(sc.Text(), "%d %d", &x, &y)
	res := x * (y)
	fmt.Println(res)
}
