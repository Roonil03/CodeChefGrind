package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	// "strconv"
	// "strings"
)

type E struct {
	p      int64
	req    int64
	gain   int64
	isClan bool
}

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	var T int
	fmt.Fscan(in, &T)
	for tc := 0; tc < T; tc++ {
		var X int64
		fmt.Fscan(in, &X)
		var B int
		fmt.Fscan(in, &B)
		events := make([]E, 0, B)
		for i := 0; i < B; i++ {
			var x, y int64
			fmt.Fscan(in, &x, &y)
			events = append(events, E{p: x, req: y, gain: 0, isClan: false})
		}
		var C int
		fmt.Fscan(in, &C)
		for i := 0; i < C; i++ {
			var p, q, r int64
			fmt.Fscan(in, &p, &q, &r)
			events = append(events, E{p: p, req: q, gain: r, isClan: true})
		}
		sort.Slice(events, func(i, j int) bool {
			return events[i].p < events[j].p
		})
		lo, hi := int64(1), int64(2e18)
		for lo < hi {
			mid := (lo + hi) / 2
			if canFinish(events, mid) {
				hi = mid
			} else {
				lo = mid + 1
			}
		}
		fmt.Println(lo)
	}
}

func canFinish(events []E, n int64) bool {
	cur := n
	for _, ev := range events {
		if !ev.isClan {
			if cur < ev.req {
				return false
			}
			cur -= ev.req
		} else {
			if cur >= ev.req {
				cur += ev.gain
			}
		}
	}
	return cur >= 1
}
