#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // int T{0};
    // cin>>T;
    // while(T--){
    //     int N{0},M{0};
    //     cin>>N>>M;
    //     vector<int> t(M),c(M);
    //     for(int i{0};i<M;i++){
    //         cin>>t[i];
    //     }
    //     for(int i{0};i<M;i++){
    //         cin>>c[i];
    //     }
    //     ll D{0},ans{0};
    //     int last{0};
    //     for(int i{0};i<M;i++){
    //         ll d = t[i]-last;
    //         if(c[i]==1){
    //             if(D + d >= 1){
    //                 ans++;
    //                 ll lb = D - d;
    //                 D = (lb > 1 ? lb : 1);
    //             } else {
    //                 D = 0;
    //             }
    //         } else {
    //             if(D - d <= -1){
    //                 ans++;
    //                 ll ub = D + d;
    //                 D = (ub < -1 ? ub : -1);
    //             } else {
    //                 D = 0;
    //             }
    //         }
    //         last = t[i];
    //     }
    //     cout<<ans<<endl;
    // }
    
    
    /*ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T{0};
    cin >> T;
    while (T--) {
        int N{0}, M{0};
        cin >> N >> M;
        vector<int> t(M), c(M);
        for (int i{0}; i < M; i++) cin >> t[i];
        for (int i{0}; i < M; i++) cin >> c[i];
        ll l{0}, r{0};
        int last{0};
        ll ans{0};
        for (int i{0}; i < M; i++) {
            ll d = t[i] - last;
            l -= d;
            r += d;
            if (c[i] == 1) {
                if (r <= 0) {
                    l = r = 0;
                } else {
                    l = max(l, 1LL);
                }
            } else {
                if (l >= 0) {
                    l = r = 0;
                } else {
                    r = min(r, -1LL);
                }
            }
            if (l <= r) {
                ans++;
            } else {
                l = r = 0;
            }
            last = t[i];
        }
        cout << ans << '\n';
    }*/
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T{0};
    cin >> T;
    while(T--){
        int N{0}, M{0};
        cin >> N >> M;
        vector<int> t(M), c(M);
        for(int i{0}; i<M; i++) cin >> t[i];
        for(int i{0}; i<M; i++) cin >> c[i];
        vector<vector<int>> dp(N+1, vector<int>(5, -1e9));
        dp[0][2] = 0;
        int ei{0};
        for(int i{1}; i<=N; i++){
            for(int j{0}; j<5; j++){
                if(j > 0) dp[i][j] = max(dp[i][j], dp[i-1][j-1]);
                if(j < 4) dp[i][j] = max(dp[i][j], dp[i-1][j+1]);
            }
            if(ei < M && t[ei] == i){
                vector<int> nd(5, -1e9);
                if(c[ei] == 1){
                    for(int j{0}; j<5; j++){
                        if(dp[i][j] == -1e9) continue;
                        int dv = j - 2;
                        if(dv > 0){
                            nd[j] = max(nd[j], dp[i][j] + 1);
                        } else {
                            nd[2] = max(nd[2], dp[i][j]);
                        }
                    }
                } else {
                    for(int j{0}; j<5; j++){
                        if(dp[i][j] == -1e9) continue;
                        int dv = j - 2;
                        if(dv < 0){
                            nd[j] = max(nd[j], dp[i][j] + 1);
                        } else {
                            nd[2] = max(nd[2], dp[i][j]);
                        }
                    }
                }
                dp[i] = nd;
                ei++;
            }
        }
        int ans{0};
        for(int j{0}; j<5; j++){
            ans = max(ans, dp[N][j]);
        }
        cout << ans << "\n";
    }
}
