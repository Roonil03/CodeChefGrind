package main

import (
	"bufio"
	"container/heap"
	"fmt"
	"os"
	"strconv"
	// 	"strings"
)

func main() {
	// your code goes here
	// 	s := bufio.NewScanner(os.Stdin)
	// 	s.Scan()
	// 	t, _ := strconv.Atoi(s.Text())
	// 	for t > 0 {
	// 		s.Scan()
	// 		n, _ := strconv.Atoi(s.Text())
	// 		s.Scan()
	// 		a := make([]int, n)
	// 		for i, v := range strings.Split(s.Text(), " ") {
	// 			a[i], _ = strconv.Atoi(v)
	// 		}
	// 		s.Scan()
	// 		q, _ := strconv.Atoi(s.Text())
	// 		s.Scan()
	// 		m := make(map[int]bool)
	// 		for i := 0; i < n; i++ {
	// 			m[a[i]] = true
	// 		}
	// 		r := make([]int, q)
	// 		for i, x := range strings.Split(s.Text(), " ") {
	// 			xi, _ := strconv.Atoi(x)
	// 			mv, mo := -1, -1
	// 			for v := range m {
	// 				if mo == -1 || v < mo {
	// 					mo = v
	// 				}
	// 				if gcd(xi, v) > 1 {
	// 					if mv == -1 || v < mv {
	// 						mv = v
	// 					}
	// 				}
	// 			}
	// 			if mv != -1 {
	// 				r[i] = mv
	// 				delete(m, mv)
	// 			} else {
	// 				r[i] = mo
	// 				delete(m, mo)
	// 			}
	// 		}
	// 		for i := 0; i < q; i++ {
	// 			if i > 0 {
	// 				fmt.Print(" ")
	// 			}
	// 			fmt.Print(r[i])
	// 		}
	// 		fmt.Println()
	// 		t--
	// 	}
	in := bufio.NewScanner(os.Stdin)
	in.Split(bufio.ScanWords)
	const maxV = 1000000
	spf := make([]int, maxV+2)
	for i := 0; i <= maxV+1; i++ {
		spf[i] = i
	}
	for i := 2; i*i <= maxV; i++ {
		if spf[i] == i {
			for j := i * i; j <= maxV; j += i {
				if spf[j] == j {
					spf[j] = i
				}
			}
		}
	}
	in.Scan()
	t, _ := strconv.Atoi(in.Text())
	for ; t > 0; t-- {
		in.Scan()
		n, _ := strconv.Atoi(in.Text())
		a := make([]int, n)
		for i := 0; i < n; i++ {
			in.Scan()
			a[i], _ = strconv.Atoi(in.Text())
		}
		in.Scan()
		q, _ := strconv.Atoi(in.Text())
		xs := make([]int, q)
		for i := 0; i < q; i++ {
			in.Scan()
			xs[i], _ = strconv.Atoi(in.Text())
		}
		freq := make(map[int]int)
		distinct := map[int]bool{}
		for _, v := range a {
			freq[v]++
			distinct[v] = true
		}
		globalHeap := &IntHeap{}
		heap.Init(globalHeap)
		primeMap := make(map[int]*IntHeap)
		for v := range distinct {
			heap.Push(globalHeap, v)
			factors := gp(v, spf)
			for _, p := range factors {
				if primeMap[p] == nil {
					h := &IntHeap{}
					heap.Init(h)
					primeMap[p] = h
				}
				heap.Push(primeMap[p], v)
			}
		}
		res := make([]int, q)
		for i := 0; i < q; i++ {
			x := xs[i]
			ps := gp(x, spf)
			mv := -1
			for _, p := range ps {
				h := primeMap[p]
				if h == nil {
					continue
				}
				for h.Len() > 0 && freq[(*h)[0]] == 0 {
					heap.Pop(h)
				}
				if h.Len() > 0 {
					c := (*h)[0]
					if mv == -1 || c < mv {
						mv = c
					}
				}
			}
			if mv == -1 {
				for globalHeap.Len() > 0 && freq[(*globalHeap)[0]] == 0 {
					heap.Pop(globalHeap)
				}
				if globalHeap.Len() > 0 {
					mv = (*globalHeap)[0]
				}
			}
			res[i] = mv
			freq[mv]--
		}
		for i, v := range res {
			if i > 0 {
				fmt.Print(" ")
			}
			fmt.Print(v)
		}
		fmt.Println()
	}
}

func gp(n int, spf []int) []int {
	r := []int{}
	for n > 1 {
		p := spf[n]
		r = append(r, p)
		for n%p == 0 {
			n /= p
		}
	}
	return r
}

type IntHeap []int

func (h IntHeap) Len() int           { return len(h) }
func (h IntHeap) Less(i, j int) bool { return h[i] < h[j] }
func (h IntHeap) Swap(i, j int)      { h[i], h[j] = h[j], h[i] }
func (h *IntHeap) Push(x any)        { *h = append(*h, x.(int)) }
func (h *IntHeap) Pop() any {
	old := *h
	n := len(old)
	x := old[n-1]
	*h = old[:n-1]
	return x
}
