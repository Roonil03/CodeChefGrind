package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	// 	r := bufio.NewReader(os.Stdin)
	//     w := bufio.NewWriter(os.Stdout)
	//     defer w.Flush()
	//     var T int
	//     fmt.Fscan(r, &T)
	//     for T > 0 {
	//         var s string
	//         fmt.Fscan(r, &s)
	//         fmt.Fprintln(w, solve(s))
	//         T--
	//     }
	// }

	// func solve(s string) int {
	// n := len(s)
	//     ev1 := make([]int, 0, n)
	//     od1 := make([]int, 0, n)
	//     ev0 := make([]int, 0, n)
	//     od0 := make([]int, 0, n)
	//     for i, c := range s {
	//         j := n - 1 - i
	//         if c == '1' {
	//             if j&1 == 0 {
	//                 ev1 = append(ev1, i)
	//             } else {
	//                 od1 = append(od1, i)
	//             }
	//         } else {
	//             if j&1 == 0 {
	//                 ev0 = append(ev0, i)
	//             } else {
	//                 od0 = append(od0, i)
	//             }
	//         }
	//     }
	//     r := (len(ev1) - len(od1)) % 3
	//     if r < 0 {
	//         r += 3
	//     }
	//     if r == 0 {
	//         return 0
	//     }
	//     var A, B []int
	//     if r == 1 {
	//         A, B = od1, ev0
	//     } else {
	//         A, B = ev1, od0
	//     }
	//     if len(A) == 0 || len(B) == 0 {
	//         return -1
	//     }
	//     i, j, md := 0, 0, 1<<30
	//     for i < len(A) && j < len(B) {
	//         d := A[i] - B[j]
	//         if d < 0 {
	//             d = -d
	//             if A[i] < B[j] {
	//                 i++
	//             } else {
	//                 j++
	//             }
	//         } else {
	//             if A[i] < B[j] {
	//                 i++
	//             } else {
	//                 j++
	//             }
	//         }
	//         if d < md {
	//             md = d
	//         }
	//     }
	//     return md
	//     r := bufio.NewReader(os.Stdin)
	//     w := bufio.NewWriter(os.Stdout)
	//     defer w.Flush()
	//     var T int
	//     fmt.Fscan(r, &T)
	//     for T > 0 {
	//         var s string
	//         fmt.Fscan(r, &s)
	//         fmt.Fprintln(w, solve(s))
	//         T--
	//     }
	// }

	// func solve(s string) int {
	//     n := len(s)
	//     ev1 := make([]int, 0, n)
	//     od1 := make([]int, 0, n)
	//     ev0 := make([]int, 0, n)
	//     od0 := make([]int, 0, n)
	//     for i, c := range s {
	//         j := n - 1 - i
	//         if c == '1' {
	//             if j&1 == 0 {
	//                 ev1 = append(ev1, i)
	//             } else {
	//                 od1 = append(od1, i)
	//             }
	//         } else {
	//             if j&1 == 0 {
	//                 ev0 = append(ev0, i)
	//             } else {
	//                 od0 = append(od0, i)
	//             }
	//         }
	//     }
	//     r := (len(ev1) - len(od1)) % 3
	//     if r < 0 {
	//         r += 3
	//     }
	//     if r == 0 {
	//         return 0
	//     }
	//     var A, B []int
	//     if r == 1 {
	//         A, B = od1, ev0
	//     } else {
	//         A, B = ev1, od0
	//     }
	//     if len(A) == 0 || len(B) == 0 {
	//         return -1
	//     }
	//     i, j, md := 0, 0, 1<<30
	//     for i < len(A) && j < len(B) {
	//         d := A[i] - B[j]
	//         if d < 0 {
	//             d = -d
	//         }
	//         if d < md {
	//             md = d
	//         }
	//         if A[i] < B[j] {
	//             i++
	//         } else {
	//             j++
	//         }
	//     }
	//     if r == 2 && len(od1) >= 2 && len(ev0) >= 2 {
	//         alt := minBipartiteMatching(od1, ev0, 2)
	//         if alt < md {
	//             md = alt
	//         }
	//     }
	//     if r == 1 && len(ev1) >= 2 && len(od0) >= 2 {
	//         alt := minBipartiteMatching(ev1, od0, 2)
	//         if alt < md {
	//             md = alt
	//         }
	//     }
	//     return md
	// }

	// func minBipartiteMatching(A, B []int, k int) int {
	//     if len(A) < k || len(B) < k {
	//         return 1<<30
	//     }
	//     minCost := 1<<30
	//     for i := 0; i < len(A) && i < k; i++ {
	//         for j := i + 1; j < len(A) && j < k; j++ {
	//             for x := 0; x < len(B) && x < k; x++ {
	//                 for y := x + 1; y < len(B) && y < k; y++ {
	//                     cost1 := abs(A[i]-B[x]) + abs(A[j]-B[y])
	//                     cost2 := abs(A[i]-B[y]) + abs(A[j]-B[x])
	//                     cost := cost1
	//                     if cost2 < cost1 {
	//                         cost = cost2
	//                     }
	//                     if cost < minCost {
	//                         minCost = cost
	//                     }
	//                 }
	//             }
	//         }
	//     }
	//     return minCost
	// }

	// func abs(x int) int {
	//     if x < 0 {
	//         return -x
	//     }
	//     return x
	//     r := bufio.NewReader(os.Stdin)
	// 	w := bufio.NewWriter(os.Stdout)
	// 	defer w.Flush()
	// 	var t int
	// 	fmt.Fscan(r, &t)
	// 	for t > 0 {
	// 		var s string
	// 		fmt.Fscan(r, &s)
	// 		fmt.Fprintln(w, solve(s))
	// 		t--
	// 	}
	// }

	// func solve(s string) int {
	// 	n := len(s)
	// 	e := 0
	// 	o := 0
	// 	for i, c := range s {
	// 		if c == '1' {
	// 			if (n-1-i)&1 == 0 {
	// 				e++
	// 			} else {
	// 				o++
	// 			}
	// 		}
	// 	}
	// 	r := (e - o) % 3
	// 	if r < 0 {
	// 		r += 3
	// 	}
	// 	if r == 0 {
	// 		return 0
	// 	}
	// 	z := 0
	// 	u := 0
	// 	for i := 0; i < n; i++ {
	// 		if s[i] == '0' {
	// 			z++
	// 		} else {
	// 			u++
	// 		}
	// 	}
	// 	if u == 0 || z == 0 {
	// 		return -1
	// 	}
	// 	if u == 1 || z == 1 {
	// 		return 1
	// 	}
	// 	f := 0
	// 	for f < n && s[f] == '0' {
	// 		f++
	// 	}
	// 	l := f
	// 	for l < n && s[l] == '1' {
	// 		l++
	// 	}
	// 	c := l == n
	// 	if !c {
	// 		f = 0
	// 		for f < n && s[f] == '1' {
	// 			f++
	// 		}
	// 		l = f
	// 		for l < n && s[l] == '0' {
	// 			l++
	// 		}
	// 		c = l == n
	// 	}
	// 	if c {
	// 		if r == 1 {
	// 			return 1
	// 		}
	// 		return 3
	// 	}
	// 	return 2
	//     r := bufio.NewReader(os.Stdin)
	// 	w := bufio.NewWriter(os.Stdout)
	// 	defer w.Flush()
	// 	var t int
	// 	fmt.Fscan(r, &t)
	// 	for t > 0 {
	// 		var s string
	// 		fmt.Fscan(r, &s)
	// 		n := len(s)
	// 		b := []byte(s)
	// 		for i, j := 0, n-1; i < j; i, j = i+1, j-1 {
	// 			b[i], b[j] = b[j], b[i]
	// 		}
	// 		s = string(b)
	// 		d := make([][]int, n)
	// 		for i := range d {
	// 			d[i] = make([]int, 3)
	// 			for j := range d[i] {
	// 				d[i][j] = 100
	// 			}
	// 		}
	// 		d[0][0] = 0
	// 		for i := 0; i < n; i++ {
	// 			if s[i] == '0' {
	// 				continue
	// 			}
	// 			m := make([][]int, n)
	// 			for k := range m {
	// 				m[k] = make([]int, 3)
	// 				for j := range m[k] {
	// 					m[k][j] = 100
	// 				}
	// 			}
	// 			for p := 0; p < n; p++ {
	// 				for rem := 0; rem < 3; rem++ {
	// 					if d[p][rem] == 100 {
	// 						continue
	// 					}
	// 					l := i - 3
	// 					if p+1 > l {
	// 						l = p + 1
	// 					}
	// 					if l < 0 {
	// 						l = 0
	// 					}
	// 					h := i + 3
	// 					if h >= n {
	// 						h = n - 1
	// 					}
	// 					for j := l; j <= h; j++ {
	// 						c := 2 - j%2
	// 						u := (rem + c) % 3
	// 						x := d[p][rem] + a(i-j)
	// 						if x < m[j][u] {
	// 							m[j][u] = x
	// 						}
	// 					}
	// 				}
	// 			}
	// 			d = m
	// 		}
	// 		z := 100
	// 		for p := 0; p < n; p++ {
	// 			if d[p][0] < z {
	// 				z = d[p][0]
	// 			}
	// 		}
	// 		if z == 100 {
	// 			z = -1
	// 		}
	// 		fmt.Fprintln(w, z)
	// 		t--
	// 	}
	// }

	// func a(x int) int {
	// 	if x < 0 {
	// 		return -x
	// 	}
	// 	return x
	r := bufio.NewReader(os.Stdin)
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()
	var T int
	fmt.Fscan(r, &T)
	for T > 0 {
		var s string
		fmt.Fscan(r, &s)
		fmt.Fprintln(w, sol(s))
		T--
	}
}

func sol(s string) int {
	n := len(s)
	var r, c0, c1 int
	for i := 0; i < n; i++ {
		r = (r*2 + int(s[i]-'0')) % 3
		if s[i] == '1' {
			c1++
		} else {
			c0++
		}
	}
	if r == 0 {
		return 0
	}
	if c0 == 0 || c1 == 0 {
		return -1
	}
	if c0 == 1 || c1 == 1 {
		for i := 0; i < n-1; i++ {
			if s[i] != s[i+1] {
				p := (n - i)
				if s[i] != '1' {
					p = (n - (i + 1))
				}
				if r == 2 && p%2 == 1 {
					return 1
				}
				if r == 1 && p%2 == 0 {
					return 1
				}
				return -1
			}
		}
	}
	pos := []int{}
	m := [2]bool{}
	for i := 0; i < n-1; i++ {
		if s[i] != s[i+1] {
			v := (n - i) % 2
			if s[i] != '1' {
				v = (n - (i + 1)) % 2
			}
			pos = append(pos, v)
		}
	}
	for _, v := range pos {
		m[v] = true
	}
	if len(pos) == 1 {
		v := pos[0]
		if r == 2 && v == 1 {
			return 1
		}
		if r == 1 && v == 0 {
			return 1
		}
		return 3
	}
	if r == 1 {
		if m[0] {
			return 1
		}
		return 2
	}
	if m[1] {
		return 1
	}
	return 2
}
