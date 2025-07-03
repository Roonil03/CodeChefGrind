package main

import (
	"bufio"
	"fmt"

	//"math"
	//"math/big"
	"os"
	//"math/rand"
)

func main() {
	// your code goes here
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var T, N uint64
	fmt.Fscan(in, &T)
	primes := []uint64{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71}
	for T > 0 {
		T--
		fmt.Fscan(in, &N)
		var a, b, x uint64
		if N%2 == 0 {
			a = 2 * N
			b = N
		} else {
			for _, p := range primes[1:] {
				if N%p != 0 {
					x = p
					break
				}
			}
			a = N * x
			b = N * (x - 1)
		}
		fmt.Fprintln(out, a, b)
	}
}

// func mul(a,b,c uint64) uint64{
//     return uint64(big.NewInt(0).Mod(big.NewInt(0).Mul(big.NewInt(int64(a)),big.NewInt(int64(b))),big.NewInt(int64(c))).Uint64())
// }

// func pow(a,d,n uint64) uint64{
//     var r=uint64(1)
//     for d>0{
//         if d&1==1{r=mul(r,a,n)}
//         a=mul(a,a,n)
//         d>>=1
//     }
//     return r
// }

// func isPrime(n uint64) bool{
//     if n<2{return false}
//     for _,p:=range[]uint64{2,3,5,7,11,13,17,19,23,29,31,37}{
//         if n==p{return true}
//         if n%p==0{return false}
//     }
//     var d=n-1
//     var s=0
//     for d&1==0{
//         d>>=1
//         s++
//     }
//     for _,a:=range[]uint64{2,325,9375,28178,450775,9780504,1795265022}{
//         if a%n==0{continue}
//         x:=pow(a,d,n)
//         if x==1||x==n-1{continue}
//         ok:=false
//         for i:=1;i<s;i++{
//             x=mul(x,x,n)
//             if x==n-1{ok=true;break}
//         }
//         if !ok{return false}
//     }
//     return true
// }

// func rho(n uint64) uint64{
//     if n%2==0{return 2}
//     for{
//         x:=rand.Uint64()%(n-2)+2
//         y:=x
//         c:=rand.Uint64()%(n-1)+1
//         for{
//             x=(mul(x,x,n)+c)%n
//             y=(mul(y,y,n)+c)%n
//             y=(mul(y,y,n)+c)%n
//             if x==y{break}
//             var diff uint64
//             if x>y{
//                 diff=x-y
//             }else{
//                 diff=y-x
//             }
//             d:=big.NewInt(0).GCD(nil,nil,big.NewInt(int64(diff)),big.NewInt(int64(n))).Uint64()
//             if d>1&&d<n{
//                 return d
//             }
//         }
//     }
// }

// func factor(n uint64,m map[uint64]struct{}){
//     if n==1{return}
//     if isPrime(n){
//         m[n]=struct{}{}
//         return
//     }
//     d:=rho(n)
//     factor(d,m)
//     factor(n/d,m)
// }

// func cnt(n uint64)int{
//     m:=make(map[uint64]struct{})
//     factor(n,m)
//     return len(m)
// }
