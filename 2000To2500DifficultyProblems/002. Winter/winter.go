package main

import (
	"bufio"
	"container/heap"
	"fmt"
	"os"
)

type Entry struct {
	time int64
	node int
}

type PriorityQueue []Entry

func (pq PriorityQueue) Len() int {
	return len(pq)
}

func (pq PriorityQueue) Less(i, j int) bool {
	return pq[i].time < pq[j].time
}

func (pq PriorityQueue) Swap(i, j int) {
	pq[i], pq[j] = pq[j], pq[i]
}

func (pq *PriorityQueue) Push(x interface{}) {
	*pq = append(*pq, x.(Entry))
}

func (pq *PriorityQueue) Pop() interface{} {
	old := *pq
	n := len(old)
	x := old[n-1]
	*pq = old[:n-1]
	return x
}

func main() {
	//your code goes here
	sc := bufio.NewScanner(os.Stdin)
	sc.Split(bufio.ScanWords)
	sc.Scan()
	N := atoi(sc.Text())
	sc.Scan()
	M := atoi(sc.Text())
	sc.Scan()
	Q := atoi(sc.Text())
	adj := make([][]int, N)
	for i := 0; i < M; i++ {
		sc.Scan()
		u := atoi(sc.Text()) - 1
		sc.Scan()
		v := atoi(sc.Text()) - 1
		adj[u] = append(adj[u], v)
		adj[v] = append(adj[v], u)
	}
	freezeTime := make([]int64, N)
	for i := range freezeTime {
		freezeTime[i] = 1e18
	}
	var currentTime int64 = 0
	pq := make(PriorityQueue, 0)
	heap.Init(&pq)
	for i := 0; i < Q; i++ {
		sc.Scan()
		typeQ := atoi(sc.Text())
		sc.Scan()
		x := atoi(sc.Text())
		switch typeQ {
		case 1:
			u := x - 1
			if freezeTime[u] > currentTime {
				freezeTime[u] = currentTime
				heap.Push(&pq, Entry{currentTime, u})
			}
		case 2:
			t := int64(x)
			currentTime += t
			for pq.Len() > 0 {
				entry := pq[0]
				if entry.time > currentTime {
					break
				}
				entry = heap.Pop(&pq).(Entry)
				if entry.time != freezeTime[entry.node] {
					continue
				}
				for _, v := range adj[entry.node] {
					newTime := entry.time + 1
					if newTime < freezeTime[v] {
						freezeTime[v] = newTime
						heap.Push(&pq, Entry{newTime, v})
					}
				}
			}
		case 3:
			v := x - 1
			if freezeTime[v] <= currentTime {
				fmt.Println("YES")
			} else {
				fmt.Println("NO")
			}
		}
	}
}

func atoi(s string) int {
	res := 0
	for _, c := range s {
		res = res*10 + int(c-'0')
	}
	return res
}
