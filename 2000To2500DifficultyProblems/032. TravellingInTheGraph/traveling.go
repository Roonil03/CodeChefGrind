package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	//"strings"
)

func main() {
	// your code goes here
	sc := bufio.NewScanner(os.Stdin)
	sc.Split(bufio.ScanWords)
	sc.Buffer(make([]byte, 2048*2048), 2048*2048)
	sc.Scan()
	T, _ := strconv.Atoi(sc.Text())
	for t := 0; t < T; t++ {
		sc.Scan()
		N, _ := strconv.Atoi(sc.Text())
		sc.Scan()
		M, _ := strconv.Atoi(sc.Text())
		adj := make([][][2]int, N+1)
		for i := 0; i < M; i++ {
			sc.Scan()
			u, _ := strconv.Atoi(sc.Text())
			sc.Scan()
			v, _ := strconv.Atoi(sc.Text())
			adj[u] = append(adj[u], [2]int{v, 0})
			adj[v] = append(adj[v], [2]int{u, 0})
		}
		for u := 1; u <= N; u++ {
			if u > 1 {
				adj[u] = append(adj[u], [2]int{u - 1, 1})
			}
			if u < N {
				adj[u] = append(adj[u], [2]int{u + 1, 1})
			}
		}
		dist := make([]int, N+1)
		for i := 1; i <= N; i++ {
			dist[i] = -1
		}
		dist[1] = 0
		df := []int{1}
		db := []int{}
		for len(df) > 0 || len(db) > 0 {
			var u int
			if len(df) > 0 {
				u = df[0]
				df = df[1:]
			} else {
				u = db[0]
				db = db[1:]
			}
			for _, edge := range adj[u] {
				v := edge[0]
				cost := edge[1]
				if dist[v] == -1 || dist[u]+cost < dist[v] {
					dist[v] = dist[u] + cost
					if cost == 0 {
						df = append(df, v)
					} else {
						db = append(db, v)
					}
				}
			}
		}
		fmt.Println(dist[N])
	}
}
