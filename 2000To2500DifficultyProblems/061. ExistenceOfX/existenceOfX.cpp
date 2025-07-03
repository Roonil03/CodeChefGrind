#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T; 
    cin >> T;
    while(T--){
        ll A, B, C;
        cin >> A >> B >> C;
        bool dp[2] = {true, false}, nxt[2];
        for(int i = 0; i < 30; ++i){
            int a = (A >> i) & 1;
            int b = (B >> i) & 1;
            int c = (C >> i) & 1;
            nxt[0] = nxt[1] = false;
            for(int cin {0}; cin < 2; ++cin){
                if(!dp[cin]){
                    continue;
                }
                for(int x = 0; x < 2; ++x){
                    int u = a ^ x;
                    int v = b ^ x;
                    int t = c ^ x;
                    int s = u + v + cin;
                    if((s & 1) == t){
                        nxt[s >> 1] = true;
                    }
                }
            }
            dp[0] = nxt[0];
            dp[1] = nxt[1];
            if(!dp[0] && !dp[1]){
                break;
            }
        }
        cout << (dp[0] ? "YES\n" : "NO\n");
    }
}
