package main

import (
	"bufio"
	"container/heap"
	"fmt"
	"os"
)

type P struct{ r, x int }
type H []P

func (h H) Len() int            { return len(h) }
func (h H) Less(i, j int) bool  { return h[i].r < h[j].r }
func (h H) Swap(i, j int)       { h[i], h[j] = h[j], h[i] }
func (h *H) Push(v interface{}) { *h = append(*h, v.(P)) }
func (h *H) Pop() interface{}   { a := (*h)[len(*h)-1]; *h = (*h)[:len(*h)-1]; return a }

func main() {
	// your code goes here
	in, out := bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in, &t)
	for t > 0 {
		t--
		var n int
		fmt.Fscan(in, &n)
		b := make([]int, n+2)
		mb := 0
		for i := 1; i <= n; i++ {
			fmt.Fscan(in, &b[i])
			if b[i] > mb {
				mb = b[i]
			}
		}
		inf := n + 1
		fp := make([]int, mb+1)
		ls := make([]int, mb+1)
		for i := 0; i <= mb; i++ {
			fp[i] = inf
		}
		for i := 1; i <= n; i++ {
			if b[i] >= 0 && b[i] <= mb {
				v := b[i]
				if i < fp[v] {
					fp[v] = i
				}
				if i > ls[v] {
					ls[v] = i
				}
			}
		}
		sm := make([]int, mb+2)
		sm[mb+1] = inf
		for i := mb; i >= 0; i-- {
			if fp[i] < sm[i+1] {
				sm[i] = fp[i]
			} else {
				sm[i] = sm[i+1]
			}
		}
		rl := make([][]P, n+2)
		ok := true
		for x := 0; x < mb; x++ {
			l := ls[x] + 1
			r := sm[x+1]
			if l > r {
				ok = false
				break
			}
			rl[l] = append(rl[l], P{r, x})
		}
		if !ok {
			fmt.Fprintln(out, -1)
			continue
		}
		h := &H{}
		heap.Init(h)
		a := make([]int, n+2)
		f := mb + n + 5
		for i := 1; i <= n; i++ {
			for _, p := range rl[i] {
				heap.Push(h, p)
			}
			if h.Len() > 0 && (*h)[0].r < i {
				ok = false
				break
			}
			sv := -1
			if b[i] >= 0 {
				sv = b[i]
			}
			var skip []P
			var ch P
			found := false
			for h.Len() > 0 {
				p := heap.Pop(h).(P)
				if p.x == sv {
					skip = append(skip, p)
					continue
				}
				ch = p
				found = true
				break
			}
			for _, p := range skip {
				heap.Push(h, p)
			}
			if found {
				a[i] = ch.x
			} else {
				a[i] = f
				f++
			}
		}
		if !ok {
			fmt.Fprintln(out, -1)
		} else {
			for i := 1; i <= n; i++ {
				if i > 1 {
					out.WriteByte(' ')
				}
				fmt.Fprint(out, a[i])
			}
			out.WriteByte('\n')
		}
	}
}
