package main

import (
	"bufio"
	"bytes"
	"fmt"
	"os"
	"sort"
)

func main() {
	r := bufio.NewReader(os.Stdin)

	var b bytes.Buffer

	t := getNum(r)

	for t > 0 {
		t--
		n := getNum(r)
		a := getNums(r, n)
		b2 := getNums(r, n)
		ans := calc(a, b2)
		b.WriteString(fmt.Sprintf("%d\n", ans))
	}

	fmt.Print(b.String())
}

func parseU64(bs []byte, f int, v *uint64) int {
	i := f

	var x uint64
	for i < len(bs) && bs[i] >= '0' && bs[i] <= '9' {
		x = x*10 + uint64(bs[i]-'0')
		i++
	}
	*v = x

	return i
}

func parseInt(bs []byte, f int, v *int) int {
	i := f
	s := 1
	if bs[i] == '-' {
		s = -1
		i++
	}
	x := 0
	for i < len(bs) && bs[i] >= '0' && bs[i] <= '9' {
		x = x*10 + int(bs[i]-'0')
		i++
	}
	*v = x * s
	return i
}

func getStr(r *bufio.Reader) string {
	s, _ := r.ReadString('\n')
	for i := 0; i < len(s); i++ {
		if s[i] == '\n' || s[i] == '\r' {
			return s[:i]
		}
	}
	return s
}

func getNum(r *bufio.Reader) (a int) {
	bs, _ := r.ReadBytes('\n')
	parseInt(bs, 0, &a)
	return
}

func getTwoNums(r *bufio.Reader) (a int, b int) {
	ans := getNums(r, 2)
	a, b = ans[0], ans[1]
	return
}

func getThreeNums(r *bufio.Reader) (a int, b int, c int) {
	ans := getNums(r, 3)
	a, b, c = ans[0], ans[1], ans[2]
	return
}

func getNums(r *bufio.Reader, n int) []int {
	ans := make([]int, n)
	x := 0
	bs, _ := r.ReadBytes('\n')
	for i := 0; i < n; i++ {
		for x < len(bs) && (bs[x] < '0' || bs[x] > '9') && bs[x] != '-' {
			x++
		}
		x = parseInt(bs, x, &ans[i])
	}
	return ans
}

func calc(a []int, b []int) int {
	n := len(a)
	c := make([]Item, 2*n)

	for i := 0; i < n; i++ {
		c[i] = Item{a[i], i}
		c[i+n] = Item{b[i], i}
	}

	sort.Slice(c, func(i, j int) bool {
		return c[i].val < c[j].val
	})
	var ans int = INF
	cnt := make(map[int]int)
	for l, r := 0, 0; l < len(c); l++ {
		for r < len(c) && len(cnt) < n {
			cnt[c[r].idx]++
			r++
		}
		if len(cnt) == n {
			ans = minVal(ans, c[r-1].val-c[l].val)
		}
		cnt[c[l].idx]--
		if cnt[c[l].idx] == 0 {
			delete(cnt, c[l].idx)
		}
	}

	return ans
}

func calcAlt(a []int, b []int) int {
	x := proc(a, b)
	y := proc(b, a)
	return minVal(x, y)
}

const INF = 1e9

func proc(a []int, b []int) int {
	n := len(a)
	p := make([]Item, n)

	for i := 0; i < n; i++ {
		p[i] = Item{a[i], b[i]}
	}

	sort.Slice(p, func(i, j int) bool {
		return p[i].val < p[j].val
	})

	x := make([]Item, n)
	for i := 0; i < n; i++ {
		x[i] = Item{p[i].idx, i}
	}

	sort.Slice(x, func(i, j int) bool {
		return x[i].val < x[j].val
	})

	arr := make([]int, 2*n)

	for i := n; i < 2*n; i++ {
		arr[i] = minVal(p[i-n].val, p[i-n].idx)
	}

	for i := n - 1; i > 0; i-- {
		arr[i] = maxVal(arr[i*2], arr[i*2+1])
	}

	upd := func(pos int, v int) {
		pos += n
		arr[pos] = v
		for pos > 1 {
			arr[pos>>1] = maxVal(arr[pos], arr[pos^1])
			pos >>= 1
		}
	}

	qry := func(l int, r int) int {
		l += n
		r += n
		var ans int
		for l < r {
			if l&1 == 1 {
				ans = maxVal(ans, arr[l])
				l++
			}
			if r&1 == 1 {
				r--
				ans = maxVal(ans, arr[r])
			}
			l >>= 1
			r >>= 1
		}
		return ans
	}

	var ans int = INF

	var mx int
	var mn int = INF
	for i, j := 0, 0; i < n; i++ {
		v := p[i].val
		if mn < v {
			break
		}
		for j < n && x[j].val < v {
			k := x[j].idx
			if k > i {
				upd(k, maxVal(p[k].val, p[k].idx))
			}
			j++
		}
		my := maxVal(qry(i+1, n), mx)
		if my >= v {
			ans = minVal(ans, my-v)
		}

		mx = maxVal(mx, p[i].idx)
		mn = minVal(mn, p[i].idx)
	}

	return ans
}

func maxVal(a, b int) int {
	if a >= b {
		return a
	}
	return b
}
func minVal(a, b int) int {
	if a <= b {
		return a
	}
	return b
}

type Item struct {
	val int
	idx int
}
