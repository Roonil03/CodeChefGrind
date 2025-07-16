package main

import (
	"bufio"
	"container/heap"
	"fmt"
	"os"
	"sort"
)

type bit struct{ t []int }

func (b bit) add(i, v int) {
	for i < len(b.t) {
		b.t[i] += v
		i += i & -i
	}
}
func (b bit) sum(i int) (s int) {
	for i > 0 {
		s += b.t[i]
		i -= i & -i
	}
	return
}
func (b bit) kth(k int) int {
	i, step := 0, 1
	for step<<1 < len(b.t) {
		step <<= 1
	}
	for step > 0 {
		if j := i + step; j < len(b.t) && b.t[j] < k {
			i, k = j, k-b.t[j]
		}
		step >>= 1
	}
	return i + 1
}

type hq []int

func (h hq) Len() int            { return len(h) }
func (h hq) Less(i, j int) bool  { return h[i] > h[j] }
func (h hq) Swap(i, j int)       { h[i], h[j] = h[j], h[i] }
func (h *hq) Push(x interface{}) { *h = append(*h, x.(int)) }
func (h *hq) Pop() interface{}   { o := *h; v := o[len(o)-1]; *h = o[:len(o)-1]; return v }

func uniq(a []int) []int {
	j := 0
	for i := 1; i < len(a); i++ {
		if a[i] != a[j] {
			j++
			a[j] = a[i]
		}
	}
	return a[:j+1]
}

func main() {
	// your code goes here
	r := bufio.NewReader(os.Stdin)
	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()
	var T int
	fmt.Fscan(r, &T)
	for ; T > 0; T-- {
		var n, m int
		fmt.Fscan(r, &n, &m)
		A := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(r, &A[i])
		}
		C := append([]int{0, m}, A...)
		sort.Ints(C)
		C = uniq(C)
		idx := make(map[int]int, len(C))
		for i, v := range C {
			idx[v] = i + 1
		}
		ft := bit{make([]int, len(C)+2)}
		ft.add(idx[0], 1)
		ft.add(idx[m], 1)
		mp := map[int]int{m: 1}
		h := &hq{m}
		heap.Init(h)
		for i, x := range A {
			ix := idx[x]
			le := ft.sum(ix)
			lidx := ft.kth(le)
			ridx := ft.kth(le + 1)
			lc, rc := C[lidx-1], C[ridx-1]
			old := rc - lc
			mp[old]--
			g1, g2 := x-lc, rc-x
			mp[g1]++
			mp[g2]++
			heap.Push(h, g1)
			heap.Push(h, g2)
			ft.add(ix, 1)
			for mp[(*h)[0]] == 0 {
				heap.Pop(h)
			}
			if i > 0 {
				fmt.Fprint(w, " ")
			}
			fmt.Fprint(w, (*h)[0])
		}
		fmt.Fprintln(w)
	}
}
