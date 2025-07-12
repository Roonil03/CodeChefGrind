// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here

// }


// package main
// import (
//     "fmt"
//     "bufio"
//     "os"
//     "sort"
// )

// // func main(){
// 	// your code goes here
// // 	sc := bufio.NewScanner(os.Stdin)
// //     sc.Scan()
// //     var t int
// //     fmt.Sscanf(sc.Text(), "%d", &t)
// //     for t > 0 {
// //         sc.Scan()
// //         var n int
// //         fmt.Sscanf(sc.Text(), "%d", &n)
// //         a := make([]int64, n)
// //         b := make([]int64, n)
// //         sc.Scan()
// //         l := sc.Text()
// //         i := 0
// //         for j := 0; j < n; j++ {
// //             for i < len(l) && l[i] == ' ' {
// //                 i++
// //             }
// //             s := i
// //             for i < len(l) && l[i] != ' ' {
// //                 i++
// //             }
// //             var v int64
// //             fmt.Sscanf(l[s:i], "%d", &v)
// //             a[j] = v
// //         }
// //         sc.Scan()
// //         l = sc.Text()
// //         i = 0
// //         for j := 0; j < n; j++ {
// //             for i < len(l) && l[i] == ' ' {
// //                 i++
// //             }
// //             s := i
// //             for i < len(l) && l[i] != ' ' {
// //                 i++
// //             }
// //             var v int64
// //             fmt.Sscanf(l[s:i], "%d", &v)
// //             b[j] = v
// //         }
// //         ap := make([][2]int64, n)
// //         bp := make([][2]int64, n)
// //         for j := 0; j < n; j++ {
// //             ap[j] = [2]int64{a[j], int64(j)}
// //             bp[j] = [2]int64{b[j], int64(j)}
// //         }
// //         sort.Slice(ap, func(i, j int) bool { return ap[i][0] < ap[j][0] })
// //         sort.Slice(bp, func(i, j int) bool { return bp[i][0] < bp[j][0] })
// //         var s64 int64
// //         for j := 0; j < n; j++ {
// //             s64 += ap[j][0] * (bp[j][1] - ap[j][1])
// //         }
// //         fmt.Println(s64)
// //         t--
// //     }
// const N=500000+7

// type pll struct{f int; s int64}

// var(
//     a [N]int64
//     b [N]int64
//     bit [N]pll
//     id  [N][]int
// )

// func upd(i int,v pll){
//     for ;i<N;i+=i&-i{
//         bit[i].f+=v.f
//         bit[i].s+=v.s
//     }
// }

// func pfx(i int) pll{
//     var t pll
//     for ;i>0;i-=i&-i{
//         t.f+=bit[i].f
//         t.s+=bit[i].s
//     }
//     return t
// }

// func main(){
//     in:=bufio.NewReader(os.Stdin)
//     out:=bufio.NewWriter(os.Stdout)
//     defer out.Flush()
//     var tt int
//     fmt.Fscan(in,&tt)
//     for tt>0{
//         tt--
//         var n int
//         fmt.Fscan(in,&n)
//         for i:=1;i<=n;i++{
//             bit[i]=pll{}
//             id[i]=id[i][:0]
//         }
//         tmp:=make([]int64,n)
//         for i:=1;i<=n;i++{
//             fmt.Fscan(in,&a[i])
//             upd(i,pll{1,a[i]})
//             tmp[i-1]=a[i]
//         }
//         for i:=1;i<=n;i++{
//             fmt.Fscan(in,&b[i])
//         }
//         sort.Slice(tmp,func(i,j int)bool{return tmp[i]<tmp[j]})
//         for i:=1;i<=n;i++{
//             ci:=sort.Search(n,func(j int)bool{return tmp[j]>=b[i]})+1
//             bi:=sort.Search(n,func(j int)bool{return tmp[j]>=a[i]})+1
//             id[bi]=append(id[bi],i)
//             b[i]=int64(ci)
//         }
//         it:=1
//         var r int
//         var res int64
//         for i:=1;i<=n;i++{
//             for it<=n && a[it]==-1{it++}
//             if it>n{break}
//             r=id[int(b[i])][0]
//             id[int(b[i])]=id[int(b[i])][1:]
//             upd(r,pll{-1,-a[r]})
//             if r!=it{
//                 t:=pfx(r)
//                 res+=t.s-int64(t.f)*a[r]
//             }else{
//                 it++
//             }
//             a[r]=-1
//         }
//         fmt.Fprintln(out,res)
//     }
// }


#include"bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include"bits/debug.h"
#else
#define dbg(...) 0
#endif

#define PB push_back
#define ll long long
#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define I ios::sync_with_stdio(false); cin.tie(0);
#define Q int tt; cin>>tt ; for(int qq=1; qq <= tt; qq++)
const int N = 5e5+7;

using pll = pair<int, ll>;
#define ff first
#define ss second

ll a[N], b[N];
pll bit[N];

void upd(int i, pll vl) {
    for (; i < N; i += i & (-i)) {
        bit[i].ff += vl.ff;
        bit[i].ss += vl.ss;
    }
}

pll pfx(int i) {
    pll tot = {0, 0};
    for (; i > 0; i -= i & (-i)) {
        tot.ff += bit[i].ff;
        tot.ss += bit[i].ss;
    }
    return tot;
}


int main() {
	I
	Q {
		int n;
		cin >> n;
		queue<int> id[n + 1];
		vector<int> tmp, c(n + 1); 
		for (int i = 0; i <= n; i++) {
			bit[i] = {0, 0};
		}
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			upd(i, {1, a[i]});
			tmp.PB(a[i]);
		}
		for (int i = 1; i <= n; i++) {
			cin >> b[i];
		}
		sort(all(tmp));
		for (int i = 1; i <= n; i++) {
			c[i] = lower_bound(all(tmp), b[i]) - tmp.begin() + 1;
			int ii = lower_bound(all(tmp), a[i]) - tmp.begin() + 1;
			id[ii].push(i);
		}

		int it = 1;
		ll res = 0;
		for (int i = 1; i <= n; i++) {
			while(it <= n and a[it] == -1) it++;
			if(it > n) break; 
			int r = id[c[i]].front();
			id[c[i]].pop();
			upd(r, {-1, -a[r]});
			if(r == it) {
				it++;
			} 
			else {
				pll tmp = pfx(r);
				res += (tmp.ss - tmp.ff * a[r]);
			}
			a[r] = -1;
		}
		cout << res<< "\n";
	}
	return 0;
}