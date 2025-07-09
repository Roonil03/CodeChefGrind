package main

import (
	"bufio"
	"fmt"
	"math/bits"
	"os"
)

// func main() {
// 	// your code goes here
// 	in := bufio.NewReader(os.Stdin)
// 	out := bufio.NewWriter(os.Stdout)
// 	defer out.Flush()
// 	var T int
// 	fmt.Fscan(in, &T)
// 	for T > 0 {
// 		T--
// 		var L, R uint64
// 		fmt.Fscan(in, &L, &R)
// 		k := bits.Len64(R) - 1
// 		p := uint64(1) << k
// 		if p >= L {
// 			fmt.Fprintln(out, 2*p+uint64(k)-1)
// 		} else {
// 			fmt.Fprintln(out, max(f(L)+g(L), f(R)+g(R)))
// 		}
// 	}
// }
// func f(x uint64) uint64 {
// 	r := uint64(0)
// 	for x > 1 {
// 		if x&1 == 0 {
// 			r++
// 		}
// 		x >>= 1
// 	}
// 	return r
// }
// func g(x uint64) uint64 {
// 	if x == 1 {
// 		return 1
// 	}
// 	k := bits.Len64(x) - 1
// 	r := uint64(1)
// 	for i := k - 1; i >= 0; i-- {
// 		if (x>>i)&1 == 0 {
// 			r = 2*r + 1
// 		} else {
// 			r = 2 * r
// 		}
// 	}
// 	return r
// }
// func max(a, b uint64) uint64 {
// 	if a > b {
// 		return a
// 	}
// 	return b
// }

func f(x uint64) uint64 {
	var r uint64
	for x > 0 {
		r += 1 - (x & 1)
		x >>= 1
	}
	return r
}
func g(x uint64) uint64 {
	for i := uint(0); i < 30; i++ {
		if (uint64(1) << (i + 1)) > x {
			break
		}
		if (x & (uint64(1) << i)) != 0 {
			x -= uint64(1) << i
		} else {
			x += uint64(1) << i
		}
	}
	return x
}
func main() {
	i := bufio.NewReader(os.Stdin)
	o := bufio.NewWriter(os.Stdout)
	defer o.Flush()
	var T int
	fmt.Fscan(i, &T)
	for T > 0 {
		T--
		var L, R uint64
		fmt.Fscan(i, &L, &R)
		if bits.Len64(L) < bits.Len64(R) {
			p := bits.Len64(R) - 1
			x := uint64(1) << p
			fmt.Fprintln(o, 2*x-1+uint64(p))
		} else {
			a := uint64(0)
			for j := uint64(0); j < 31; j++ {
				if L+j > R {
					break
				}
				v := f(L+j) + g(L+j)
				if v > a {
					a = v
				}
			}
			fmt.Fprintln(o, a)
		}
	}
}
