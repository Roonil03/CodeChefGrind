// package main
// import (
//     "fmt"
//     "bufio"
//     "os"
//     "sort"
//     "strconv"
// 	"strings"
// )

// func main(){
// 	// your code goes here
//     s := bufio.NewScanner(os.Stdin)
// 	w := bufio.NewWriter(os.Stdout)
// 	defer w.Flush()

// 	s.Scan()
// 	t, _ := strconv.Atoi(s.Text())

// 	for t > 0 {
// 		s.Scan()
// 		nm := strings.Fields(s.Text())
// 		n, _ := strconv.Atoi(nm[0])
// 		m, _ := strconv.Atoi(nm[1])

// 		s.Scan()
// 		arr := strings.Fields(s.Text())
// 		b := make([]int, n*m)
// 		for i := 0; i < n*m; i++ {
// 			b[i], _ = strconv.Atoi(arr[i])
// 		}

// 		sort.Ints(b)
// 		st, md := -1, 1000000000
// 		c := n + m - 1
// 		sw := false
// 		if n < m {
// 			sw = true
// 			n, m = m, n
// 		}

// 		for i := 0; i < n*m; i++ {
// 			l := m / 2
// 			mo := (m - 1) / 2
// 			if i <= l {
// 				continue
// 			}
// 			if i+c-1+mo >= n*m {
// 				continue
// 			}
// 			if b[i+c-1]-b[i] < md {
// 				md = b[i+c-1] - b[i]
// 				st = i
// 			}
// 		}

// 		if st == -1 {
// 			st = (m/2) + 1
// 		}

// 		a := make([]int, n*m)
// 		u := make([]int, n*m)
// 		lo, hi := 0, n*m-1
// 		L, R := st, st+c-1

// 		for i := 0; i < m/2; i++ {
// 			if 2*i+1 < n*m && R >= 0 && R < n*m {
// 				a[2*i+1] = b[R]
// 				u[R] = 1
// 			}
// 			if 2*i+m < n*m && lo >= 0 && lo < n*m {
// 				a[2*i+m] = b[lo]
// 				u[lo] = 1
// 			}
// 			lo++
// 			R--
// 		}

// 		for i := 0; i < (m-1)/2; i++ {
// 			if 2*i+2 < n*m && L >= 0 && L < n*m {
// 				a[2*i+2] = b[L]
// 				u[L] = 1
// 			}
// 			if 2*i+1+m < n*m && hi >= 0 && hi < n*m {
// 				a[2*i+1+m] = b[hi]
// 				u[hi] = 1
// 			}
// 			L++
// 			hi--
// 		}

// 		op := make([]int, 0)
// 		op = append(op, 0)
// 		for i := 1; i < n && m-1+i*m < n*m; i++ {
// 			op = append(op, m-1+i*m)
// 		}

// 		for i := 0; i < len(op) && i <= R-L; i++ {
// 			if L+i >= 0 && L+i < n*m {
// 				a[op[i]] = b[L+i]
// 				u[L+i] = 1
// 			}
// 		}

// 		p := 0
// 		for i := 0; i < n*m; i++ {
// 			if a[i] != 0 {
// 				continue
// 			}
// 			for p < n*m && u[p] == 1 {
// 				p++
// 			}
// 			if p < n*m {
// 				a[i] = b[p]
// 				p++
// 			}
// 		}

// 		if !sw {
// 			for i := 0; i < n; i++ {
// 				for j := 0; j < m; j++ {
// 					if j > 0 {
// 						fmt.Fprint(w, " ")
// 					}
// 					fmt.Fprint(w, a[i*m+j])
// 				}
// 				fmt.Fprintln(w)
// 			}
// 		} else {
// 			for i := 0; i < m; i++ {
// 				for j := 0; j < n; j++ {
// 					if j > 0 {
// 						fmt.Fprint(w, " ")
// 					}
// 					fmt.Fprint(w, a[i+j*m])
// 				}
// 				fmt.Fprintln(w)
// 			}
// 		}
// 		t--
// 	}
// }

package main

import (
	"bufio"
	"bytes"
	"fmt"
	"os"
	"sort"
)

var (
	in  = bufio.NewReaderSize(os.Stdin, 1<<20)
	out = bufio.NewWriterSize(os.Stdout, 1<<20)
)

func readInt() int64 {
	var sign int64 = 1
	var val int64
	c, _ := in.ReadByte()
	for (c < '0' || c > '9') && c != '-' {
		c, _ = in.ReadByte()
	}
	if c == '-' {
		sign = -1
		c, _ = in.ReadByte()
	}
	for c >= '0' && c <= '9' {
		val = val*10 + int64(c-'0')
		c, _ = in.ReadByte()
	}
	return val * sign
}

func build(n, m int, arr []int64) [][]int64 {
	sort.Slice(arr, func(i, j int) bool { return arr[i] < arr[j] })

	lenPath := n + m - 1
	lb := n / 2
	rb := (n - 1) / 2

	bestL := -1
	bestDiff := int64(1<<63 - 1)

	for i := lb; i < n*m; i++ {
		left := i
		right := left + lenPath - 1
		if right >= n*m {
			break
		}
		after := n*m - right - 1
		if after < rb {
			break
		}
		diff := arr[right] - arr[left]
		if diff < bestDiff {
			bestDiff = diff
			bestL = left
		}
	}
	if bestL == -1 {
		bestL = lb
	}

	mat := make([][]int64, n)
	for i := range mat {
		mat[i] = make([]int64, m)
	}
	used := make([]bool, n*m)

	l := bestL
	r := bestL + lenPath - 1

	for i := 0; i < n; i++ {
		mat[i][0] = arr[l]
		used[l] = true
		l++
	}

	for j := 1; j < m; j++ {
		mat[n-1][j] = arr[l]
		used[l] = true
		l++
	}

	temp := bestL - 1
	for i := 0; i < n-1; i++ {
		if i&1 == 1 {
			r++
			mat[i][1] = arr[r]
			used[r] = true
		} else {
			if temp >= 0 {
				mat[i][1] = arr[temp]
				used[temp] = true
				temp--
			}
		}
	}

	ptr := 0
	for i := 0; i < n-1; i++ {
		for j := 2; j < m; j++ {
			for ptr < n*m && used[ptr] {
				ptr++
			}
			mat[i][j] = arr[ptr]
			used[ptr] = true
		}
	}
	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			if mat[i][j] == 0 {
				for ptr < n*m && used[ptr] {
					ptr++
				}
				mat[i][j] = arr[ptr]
				used[ptr] = true
			}
		}
	}
	return mat
}

func solveCase() {
	n := int(readInt())
	m := int(readInt())

	total := n * m
	raw := make([]int64, total)
	for i := 0; i < total; i++ {
		raw[i] = readInt()
	}

	var mat [][]int64
	if n <= m {
		mat = build(n, m, raw)
	} else {
		trans := build(m, n, raw)
		mat = make([][]int64, n)
		for i := 0; i < n; i++ {
			mat[i] = make([]int64, m)
			for j := 0; j < m; j++ {
				mat[i][j] = trans[j][i]
			}
		}
	}

	var buf bytes.Buffer
	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			if j > 0 {
				buf.WriteByte(' ')
			}
			fmt.Fprint(&buf, mat[i][j])
		}
		buf.WriteByte('\n')
	}
	out.Write(buf.Bytes())
}

func main() {
	t := int(readInt())
	for ; t > 0; t-- {
		solveCase()
	}
	out.Flush()
}
