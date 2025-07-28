package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// your code goes here
	// 	in := bufio.NewReaderSize(os.Stdin, 1<<20)
	//     out := bufio.NewWriterSize(os.Stdout, 1<<20)
	//     defer out.Flush()
	//     var T int
	//     fmt.Fscan(in, &T)
	//     for T > 0 {
	//         T--
	//         var N, K int
	//         var S string
	//         fmt.Fscan(in, &N, &K, &S)
	//         cnt := [26]int{}
	//         for i := 0; i < N; i++ {
	//             cnt[S[i]-'a']++
	//         }
	//         ok := true
	//         mx, mn := 0, N
	//         for _, v := range cnt {
	//             if v > 0 && v < mn {
	//                 mn = v
	//             }
	//             if v > mx {
	//                 mx = v
	//             }
	//         }
	//         if mx-mn > K {
	//             fmt.Fprintln(out, -1)
	//             continue
	//         }
	//         res := make([]byte, N)
	//         for i := 0; i < N; i++ {
	//             placed := false
	//             for c := 0; c < 26; c++ {
	//                 if cnt[c] == 0 {
	//                     continue
	//                 }
	//                 cnt[c]--
	//                 remMx, remMn := 0, N
	//                 zero := false
	//                 for d := 0; d < 26; d++ {
	//                     v := cnt[d]
	//                     if v == 0 {
	//                         zero = true
	//                     }
	//                     if v > 0 && v < remMn {
	//                         remMn = v
	//                     }
	//                     if v > remMx {
	//                         remMx = v
	//                     }
	//                 }
	//                 valid := true
	//                 if zero {
	//                     if remMx > K {
	//                         valid = false
	//                     }
	//                 } else {
	//                     if remMx-remMn > K {
	//                         valid = false
	//                     }
	//                 }
	//                 if valid {
	//                     res[i] = byte('a' + c)
	//                     placed = true
	//                     break
	//                 }
	//                 cnt[c]++
	//             }
	//             if !placed {
	//                 ok = false
	//                 break
	//             }
	//         }
	//         if !ok {
	//             fmt.Fprintln(out, -1)
	//         } else {
	//             fmt.Fprintln(out, string(res))
	//         }
	//     }
	in := bufio.NewReaderSize(os.Stdin, 1<<20)
	out := bufio.NewWriterSize(os.Stdout, 1<<20)
	defer out.Flush()
	var T int
	fmt.Fscan(in, &T)
	for T > 0 {
		T--
		var N, K int
		var S string
		fmt.Fscan(in, &N, &K, &S)
		cnt := [26]int{}
		present := [26]bool{}
		for i := 0; i < N; i++ {
			idx := S[i] - 'a'
			cnt[idx]++
			present[idx] = true
		}
		mx, mn := 0, N
		for c := 0; c < 26; c++ {
			if !present[c] {
				continue
			}
			v := cnt[c]
			if v > mx {
				mx = v
			}
			if v < mn {
				mn = v
			}
		}
		if mx-mn > K {
			fmt.Fprintln(out, -1)
			continue
		}
		res := make([]byte, N)
		ok := true
		for i := 0; i < N; i++ {
			placed := false
			for c := 0; c < 26; c++ {
				if cnt[c] == 0 {
					continue
				}
				cnt[c]--
				remMx, remMn := 0, N
				anyZero := false
				for d := 0; d < 26; d++ {
					if !present[d] {
						continue
					}
					v := cnt[d]
					if v == 0 {
						anyZero = true
					}
					if v > remMx {
						remMx = v
					}
					if v < remMn {
						remMn = v
					}
				}
				valid := true
				if anyZero {
					if remMx > K {
						valid = false
					}
				} else {
					if remMx-remMn > K {
						valid = false
					}
				}
				if valid {
					res[i] = byte('a' + c)
					placed = true
					break
				}
				cnt[c]++
			}
			if !placed {
				ok = false
				break
			}
		}
		if !ok {
			fmt.Fprintln(out, -1)
		} else {
			fmt.Fprintln(out, string(res))
		}
	}
}
