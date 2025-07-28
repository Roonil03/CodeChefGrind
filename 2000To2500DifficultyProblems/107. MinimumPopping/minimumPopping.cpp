// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
// 	// your code goes here
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int T{0};
//     cin>>T;
//     while(T--){
//         int N{0}, M{0};
//         cin>>N>>M;
//         vector<int> Q(M);
//         for(int i{0}; i<M; ++i){
//             cin>>Q[i];
//         }
//         vector<int> cnt(N+1);
//         int need = N, r{0};
//         ll ans = M;
//         while(r < M && need){
//             if(cnt[Q[r]]++ == 0) --need;
//             ++r;
//         }
//         if(need) {
//             cout<<M<<"\n";
//             continue;
//         }
//         ans = min(ans, (ll)r);
//         int l = 0;
//         for(int remR = r-1; remR >= 0; --remR){
//             if(--cnt[Q[remR]] == 0){
//                 int x = Q[remR];
//                 do{
//                     --l;
//                     if(l < 0) l += M;
//                     if(cnt[Q[l]]++ == 0) {
//                         break;
//                     }
//                 } while(true);
//             }
//             ll sz = remR - l + 1;
//             if(sz < 0) sz += M;
//             ans = min(ans, sz);
//         }
//         cout<<ans<<"\n";
//     }
// }


#include<bits/stdc++.h>
    using namespace std;
     
    #define _z ios_base::sync_with_stdio(false); cin.tie(NULL);
    #define int long long int
    #define endl "\n"
    #define mod 1000000007
    #define pb_ push_back
    #define mp_ make_pair
    //______________________________z_____________________________
     
    void solve()
    {
        int n, m;
        cin>>n>>m;
        int a[m], occur[n]={0}, ind=0, ans=m;
        for(int i=0; i<m; i++) {
            cin>>a[i];
            if(!occur[a[i]-1]) ind=i;
            occur[a[i]-1]++;
        }
        ans=ind+1;
        for(int i=ind+1; i<m; i++) {
            occur[a[i]-1]--;
        }
        for(int i=ind, j=m-1; i>=0; i--) {
            occur[a[i]-1]--;
            if(!occur[a[i]-1]) {
                while(a[j]!=a[i]) {
                    occur[a[j]-1]++;
                    j--;
                }
                occur[a[i]-1]++;
                //cout<<i<<" "<<ans<<" "<<m-j+i<<endl;
            }
            ans=min(ans, m-j+i);
        }
        cout<<ans<<endl;
    }
     
    int32_t main()
    {
        _z;
        int t=1;
        cin>>t;
        while(t--)
        {
            solve();
        }
    }