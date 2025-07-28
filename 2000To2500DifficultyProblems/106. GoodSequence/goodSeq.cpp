#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T{0};
    cin>>T;
    while(T--){
        int N{0};
        cin>>N;
        vector<int>A(N+1);
        for(int i{1};i<=N;i++) cin>>A[i];
        vector<int>P(N+1);
        P[0] = 0;
        for(int i{1};i<=N;i++){
            P[i] = P[i-1] + (A[i] == 1 ? 1 : -1);
        }
        unordered_map<int,pair<int,int>> mx;
        vector<int> dp(N+1);
        vector<int> pr(N+1, -1);
        int bt{0}, bi{0};
        for(int i{0}; i<=N; i++){
            dp[i] = 1;
            if(mx.count(P[i]-1)){
                if(1 + mx[P[i]-1].first > dp[i]){
                    dp[i] = 1 + mx[P[i]-1].first;
                    pr[i] = mx[P[i]-1].second;
                }
            }
            if(!mx.count(P[i]) || dp[i] > mx[P[i]].first){
                mx[P[i]] = {dp[i], i};
            }
            if(dp[i] > bt){
                bt = dp[i];
                bi = i;
            }
        }
        vector<int> sq;
        int c = bi;
        while(c != -1){
            sq.push_back(c + 1);
            c = pr[c];
        }
        reverse(sq.begin(), sq.end());
        cout << bt << "\n";
        for(int i{0}; i < bt; i++){
            cout << sq[i];
            if(i < bt-1) cout << " ";
        }
        cout << "\n";
    }
}
