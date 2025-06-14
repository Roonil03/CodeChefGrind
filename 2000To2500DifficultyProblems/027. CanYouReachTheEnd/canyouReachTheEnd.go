// package main

// import (
//     "bufio"
//     "fmt"
//     "os"
//     "sort"
// )

// func main() {
//     // your code goes here
//     sc := bufio.NewScanner(os.Stdin)
//     sc.Scan()
//     var t int
//     fmt.Sscanf(sc.Text(), "%d", &t)
//     for t > 0 {
//         t--
//         sc.Scan()
//         var n int
//         fmt.Sscanf(sc.Text(), "%d", &n)
//         perm := make([]int, n+1)
//         for i := 0; i < n; i++ {
//             sc.Scan()
//             var x, y int
//             fmt.Sscanf(sc.Text(), "%d %d", &x, &y)
//             perm[x] = y
//         }
//         if solve(perm, n) {
//             fmt.Println("YES")
//         } else {
//             fmt.Println("NO")
//         }
//     }
// }

// func solve(perm []int, n int) bool {
//     blocks := make([][2]int, 0, n)
//     for i := 1; i <= n; i++ {
//         blocks = append(blocks, [2]int{i + perm[i], i})
//     }
//     sort.Slice(blocks, func(i, j int) bool {
//         if blocks[i][0] == blocks[j][0] {
//             return blocks[i][1] < blocks[j][1]
//         }
//         return blocks[i][0] < blocks[j][0]
//     })
//     currentIntervals := [][2]int{{1, 1}}
//     blockIdx := 0
//     for diag := 3; diag <= 2*n; diag++ {
//         blockedRows := []int{}
//         for blockIdx < n && blocks[blockIdx][0] == diag {
//             blockedRows = append(blockedRows, blocks[blockIdx][1])
//             blockIdx++
//         }
//         minPossible := max(1, diag-n)
//         maxPossible := min(n, diag-1)
//         newIntervals := [][2]int{}
//         for _, interval := range currentIntervals {
//             expandedMin := max(minPossible, interval[0])
//             expandedMax := min(maxPossible, interval[1]+1)
//             if expandedMin <= expandedMax {
//                 newIntervals = append(newIntervals, [2]int{expandedMin, expandedMax})
//             }
//         }
//         if len(newIntervals) > 1 {
//             sort.Slice(newIntervals, func(i, j int) bool {
//                 return newIntervals[i][0] < newIntervals[j][0]
//             })
//             merged := [][2]int{newIntervals[0]}
//             for i := 1; i < len(newIntervals); i++ {
//                 if newIntervals[i][0] <= merged[len(merged)-1][1]+1 {
//                     merged[len(merged)-1][1] = max(merged[len(merged)-1][1], newIntervals[i][1])
//                 } else {
//                     merged = append(merged, newIntervals[i])
//                 }
//             }
//             newIntervals = merged
//         }
//         finalIntervals := [][2]int{}
//         for _, interval := range newIntervals {
//             currentMin, currentMax := interval[0], interval[1]
//             for _, blockedRow := range blockedRows {
//                 if blockedRow < currentMin || blockedRow > currentMax {
//                     continue
//                 }
//                 if blockedRow == currentMin {
//                     currentMin++
//                 } else if blockedRow == currentMax {
//                     currentMax--
//                 } else {
//                     if currentMin < blockedRow {
//                         finalIntervals = append(finalIntervals, [2]int{currentMin, blockedRow - 1})
//                     }
//                     currentMin = blockedRow + 1
//                 }
//             }
//             if currentMin <= currentMax {
//                 finalIntervals = append(finalIntervals, [2]int{currentMin, currentMax})
//             }
//         }
//         currentIntervals = finalIntervals
//         if len(currentIntervals) == 0 {
//             return false
//         }
//     }

//     for _, interval := range currentIntervals {
//         if interval[0] <= n && n <= interval[1] {
//             return true
//         }
//     }
//     return false
// }

// func max(a, b int) int {
//     if a > b {
//         return a
//     }
//     return b
// }

// func min(a, b int) int {
//     if a < b {
//         return a
//     }
//     return b
// }

package main

import (
	"bufio"
	"os"
	"sort"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()
	line, _, _ := reader.ReadLine()
	t, _ := strconv.Atoi(string(line))
	for t > 0 {
		t--
		line, _, _ := reader.ReadLine()
		n, _ := strconv.Atoi(string(line))
		v := make([][2]int, n)
		for i := 0; i < n; i++ {
			line, _, _ := reader.ReadLine()
			parts := strings.Fields(string(line))
			v[i][0], _ = strconv.Atoi(parts[0])
			v[i][1], _ = strconv.Atoi(parts[1])
		}
		sort.Slice(v, func(i, j int) bool {
			if v[i][0] == v[j][0] {
				return v[i][1] < v[j][1]
			}
			return v[i][0] < v[j][0]
		})
		lst := 0
		for i := 1; i < n; i++ {
			if v[i][1] == v[i-1][1]-1 {
				lst = i
			} else {
				break
			}
		}
		if v[lst][1] == 1 {
			writer.WriteString("No\n")
			continue
		}
		for i := 0; i < n/2; i++ {
			v[i], v[n-1-i] = v[n-1-i], v[i]
		}
		lst = 0
		for i := 1; i < n; i++ {
			if v[i][1] == v[i-1][1]+1 {
				lst = i
			} else {
				break
			}
		}
		if v[lst][1] == n {
			writer.WriteString("No\n")
			continue
		}
		writer.WriteString("Yes\n")
	}
}
