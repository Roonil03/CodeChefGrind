// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here

// }

// package main
// import (
//     "fmt"
//     "os"
//     "bufio"
//     "sort"
// )

// func main(){
// 	// your code goes here
// 	in := bufio.NewReader(os.Stdin)
//     out := bufio.NewWriter(os.Stdout)
//     defer out.Flush()
//     var T int
//     fmt.Fscan(in, &T)
//     for T > 0 {
//         T--
//         var N, M int
//         fmt.Fscan(in, &N, &M)
//         pos := make([]int, N+1)
//         for i := 1; i <= N; i++ {
//             fmt.Fscan(in, &pos[i])
//         }
//         rk := make([]int, M+1)
//         for i := 1; i <= M; i++ {
//             fmt.Fscan(in, &rk[i])
//         }
//         prefs := make([][]int, M+1)
//         for i := 1; i <= M; i++ {
//             var k int
//             fmt.Fscan(in, &k)
//             prefs[i] = make([]int, k)
//             for j := range prefs[i] {
//                 fmt.Fscan(in, &prefs[i][j])
//             }
//             sort.Slice(prefs[i], func(a, b int) bool {
//                 return pos[prefs[i][a]] < pos[prefs[i][b]]
//             })
//         }
//         order := make([]int, M)
//         for i := 1; i <= M; i++ {
//             order[i-1] = i
//         }
//         sort.Slice(order, func(a, b int) bool {
//             return rk[order[a]] < rk[order[b]]
//         })
//         avail := make([]bool, N+1)
//         for i := 1; i <= N; i++ {
//             avail[i] = true
//         }
//         assigned := make([]int, M+1)
//         for _, s := range order {
//             for _, c := range prefs[s] {
//                 if avail[c] {
//                     assigned[s] = c
//                     avail[c] = false
//                     break
//                 }
//             }
//         }
//         if assigned[1] == 0 {
//             fmt.Fprintln(out, 0)
//         } else {
//             fmt.Fprintln(out, assigned[1])
//         }
//     }
// }


#include<bits/stdc++.h>
 
using namespace std;
 
const int maxt = 1e5, maxn = 1e5, maxm = 1e5, maxapp = 1e6, maxtn = 250000, maxtm = 250000;
 
int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    int tn = 0, tm = 0, tapp = 0;
    while(t--){
        int n, m; cin >> n >> m;
        tn += n; tm += m;
        int rank[n + 1]; set<int> urank; urank.clear();
        int prank; 
        for(int i = 1; i <= n; i++){
            cin >> prank;
            rank[i] = prank; urank.insert(prank);
        }
        assert(urank.size() == n);
        
        int mark[m + 1]; set<int> umark; umark.clear();
        int pmark;
        for(int i = 1; i <= m; i++){
            cin >> pmark;
            mark[pmark] = i; umark.insert(pmark);
        }
        assert(umark.size() == m);
        
        vector<int> app[m + 1]; bool inc[m + 1]; memset(inc, false, sizeof(inc));
        for(int i = 1; i <= m; i++){
            app[i].clear();
            int k; cin >> k;
            tapp += k;
            int id;
            for(int j = 1; j <= k; j++){
                cin >> id;
                app[i].push_back(id);
            }
            sort(app[i].begin(), app[i].end(), [&rank](int &a, int &b){return rank[a] < rank[b];});
        }
 
        int ans[m + 1]; memset(ans, 0, sizeof(ans));
        for(int i = 1; i <= m; i++){
            vector<int> papp = app[mark[i]];
            for(int x : papp){
                if(!inc[x]){
                    ans[mark[i]] = x;
                    inc[x] = true;
                    break;
                }
            }
        }
        cout << ans[1] << endl;
    }
}  