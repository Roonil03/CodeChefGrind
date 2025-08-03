// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
// 	// your code goes here
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int T; 
//     cin >> T;
//     while(T--){
//         int N;
//         ll C;
//         cin >> N >> C;
//         vector<ll> A(N);
//         for(int i{0}; i<N; i++) cin >> A[i];
//         sort(A.begin(), A.end());
//         int left_cnt{0}, right_cnt{0};
//         for(int i = (int)A.size() - 1; i >= 0 && A[i] < C; --i){
//             if(((A[i] ^ C) & 1) == 1) left_cnt++;
//             else break;
//         }
//         for(int i = 0; i < N && A[i] > C; ++i){
//             if(((A[i] ^ C) & 1) == 1) right_cnt++;
//             else break;
//         }
//         int elim = left_cnt + right_cnt;
//         bool run = (elim == N);
//         cout << elim << " " << (run ? 1 : -1) << "\n";
//     }
// }


#include <bits/stdc++.h>
using namespace std;
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

int main()
{
    int t;cin>>t;
    assert(t>=1 and t<=10);
    while(t--){
    int n;cin>>n;
    assert(n>=1 and n<=100000);
    int chef;cin>>chef;
    assert(chef>=1 and chef<=1000*1000*1000);
    int police[n];
    for(int i=0;i<n;i++){cin>>police[i];
    assert(police[i]>=1 and police[i]<=1000*1000*1000);
    assert(police[i]!=chef);
    }
    sort(police,police+n);
    int p1=lower_bound(police,police+n,chef)-police;
    int p2=upper_bound(police,police+n,chef)-police;
    int ans=0;
    p1--;
    while(p1>=0 and police[p1]%2!=chef%2){p1--;ans++;}
    while(p2<n and police[p2]%2!=chef%2){p2++;ans++;}
    cout<<ans<<' ';
    if(ans==n)cout<<1<<endl;
    else cout<<-1<<endl;
    }
}