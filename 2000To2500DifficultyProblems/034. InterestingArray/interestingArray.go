package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in, &t)
	for ; t > 0; t-- {
		var n int
		fmt.Fscan(in, &n)
		a := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(in, &a[i])
		}
		sort.Ints(a)
		b := make([]int, n)
		c := make([]int, n)
		mid1 := (n + 1) / 2
		for i, j := 0, 0; i < n && j < mid1; i += 2 {
			b[i] = a[j]
			j++
		}
		for i, j := 1, mid1; i < n && j < n; i += 2 {
			b[i] = a[j]
			j++
		}
		mid2 := n / 2
		for i, j := 0, mid2; i < n && j < n; i += 2 {
			c[i] = a[j]
			j++
		}
		for i, j := 1, 0; i < n && j < mid2; i += 2 {
			c[i] = a[j]
			j++
		}
		if check(b) {
			for i, v := range b {
				if i > 0 {
					out.WriteByte(' ')
				}
				fmt.Fprint(out, v)
			}
			out.WriteByte('\n')
		} else if check(c) {
			for i, v := range c {
				if i > 0 {
					out.WriteByte(' ')
				}
				fmt.Fprint(out, v)
			}
			out.WriteByte('\n')
		} else {
			fmt.Fprintln(out, -1)
		}
	}
}

// func ok(a []int) bool {
//     n := len(a)
//     for i := 0; i < n-2; i++ {
//         if (a[i] <= a[i+1] && a[i+1] <= a[i+2]) || (a[i] >= a[i+1] && a[i+1] >= a[i+2]) {
//             return false
//         }
//     }
//     return true
// }

// func zz(s []int) []int {
//     n := len(s)
//     m := (n + 1) / 2
//     r := make([]int, n)
//     for i := 0; i < m; i++ {
//         r[2*i] = s[i]
//     }
//     for i := 0; i < n-m; i++ {
//         r[2*i+1] = s[m+i]
//     }
//     return r
// }

func check(ar []int) bool {
	n := len(ar)
	for i := 0; i < n-2; i++ {
		if ar[i] >= ar[i+1] && ar[i+1] >= ar[i+2] {
			return false
		}
		if ar[i] <= ar[i+1] && ar[i+1] <= ar[i+2] {
			return false
		}
	}
	return true
}
