package main

import (
	"bufio"
	"container/heap"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var N, M, Q int
	fmt.Fscan(in, &N, &M, &Q)
	w := make([]int64, N)
	for i := 0; i < N; i++ {
		fmt.Fscan(in, &w[i])
	}
	edges := make([][2]int, M)
	for i := 0; i < M; i++ {
		var x, y int
		fmt.Fscan(in, &x, &y)
		edges[i] = [2]int{x - 1, y - 1}
	}

	type Query struct {
		t    byte
		a, b int
	}
	qs := make([]Query, Q)
	del := make([]bool, M)
	old := make([]int64, Q)
	for i := 0; i < Q; i++ {
		var typ string
		fmt.Fscan(in, &typ)
		if typ[0] == 'D' {
			fmt.Fscan(in, &qs[i].b)
			qs[i].t = 'D'
			qs[i].b--
			del[qs[i].b] = true
		} else {
			fmt.Fscan(in, &qs[i].a, &qs[i].b)
			qs[i].t = 'P'
			qs[i].a--
			old[i] = w[qs[i].a]
			w[qs[i].a] = int64(qs[i].b)
		}
	}

	dsu := NewDSU(N, w)
	ms := make(map[int64]int)
	h := &MaxHeap{}
	heap.Init(h)
	for i := 0; i < N; i++ {
		add(ms, dsu.sum[i], h)
	}
	for i, e := range edges {
		if !del[i] {
			dsu.Union(e[0], e[1], ms, h)
		}
	}
	ans := make([]int64, Q)
	for i := Q - 1; i >= 0; i-- {
		ans[i] = h.TopValid(ms)
		if qs[i].t == 'D' {
			e := edges[qs[i].b]
			dsu.Union(e[0], e[1], ms, h)
		} else {
			u := dsu.Find(qs[i].a)
			remove(ms, dsu.sum[u])
			dsu.sum[u] -= w[qs[i].a]
			w[qs[i].a] = old[i]
			dsu.sum[u] += w[qs[i].a]
			add(ms, dsu.sum[u], h)
		}
	}
	for _, v := range ans {
		fmt.Fprintln(out, v)
	}
}

type DSU struct {
	p, r []int
	sum  []int64
}

func NewDSU(n int, w []int64) *DSU {
	d := &DSU{
		p:   make([]int, n),
		r:   make([]int, n),
		sum: make([]int64, n),
	}
	for i := 0; i < n; i++ {
		d.p[i] = i
		d.sum[i] = w[i]
	}
	return d
}

func (d *DSU) Find(x int) int {
	if d.p[x] != x {
		d.p[x] = d.Find(d.p[x])
	}
	return d.p[x]
}

func (d *DSU) Union(x, y int, ms map[int64]int, h *MaxHeap) {
	x = d.Find(x)
	y = d.Find(y)
	if x == y {
		return
	}
	if d.r[x] < d.r[y] {
		x, y = y, x
	}
	// remove old sums
	remove(ms, d.sum[x])
	remove(ms, d.sum[y])
	// union
	d.p[y] = x
	d.sum[x] += d.sum[y]
	// add new sum
	add(ms, d.sum[x], h)
	if d.r[x] == d.r[y] {
		d.r[x]++
	}
}

func add(ms map[int64]int, v int64, h *MaxHeap) {
	ms[v]++
	heap.Push(h, v)
}

func remove(ms map[int64]int, v int64) {
	if cnt := ms[v]; cnt <= 1 {
		delete(ms, v)
	} else {
		ms[v] = cnt - 1
	}
}

type MaxHeap []int64

func (h MaxHeap) Len() int            { return len(h) }
func (h MaxHeap) Less(i, j int) bool  { return h[i] > h[j] }
func (h MaxHeap) Swap(i, j int)       { h[i], h[j] = h[j], h[i] }
func (h *MaxHeap) Push(x interface{}) { *h = append(*h, x.(int64)) }
func (h *MaxHeap) Pop() interface{} {
	old := *h
	n := len(old)
	x := old[n-1]
	*h = old[:n-1]
	return x
}
func (h *MaxHeap) TopValid(ms map[int64]int) int64 {
	for h.Len() > 0 {
		v := (*h)[0]
		if ms[v] > 0 {
			return v
		}
		heap.Pop(h)
	}
	return 0
}
