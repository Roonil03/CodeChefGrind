#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N;
        string A, B;
        cin >> N >> A >> B;
        vector<int> pA(N+1, 0), pB(N+1, 0);
        for (int i {0}; i < N; i++) {
            pA[i+1] = pA[i] + (A[i] == '1');
            pB[i+1] = pB[i] + (B[i] == '1');
        }
        const ll INF = (ll)4e18;
        vector<vector<ll>> dp(N+1, vector<ll>(N+1, INF));
        dp[0][0] = 0;
        for (int i {0}; i <= N; i++) {
            for (int j {0}; j <= N; j++) {
                ll cur = dp[i][j];
                if (cur == INF) continue;
                ll ones = pA[i] + pB[j];
                if (i < N) {
                    if (A[i] == '0') {
                        dp[i+1][j] = min(dp[i+1][j], cur + ones);
                    } else {
                        dp[i+1][j] = min(dp[i+1][j], cur);
                    }
                }
                if (j < N) {
                    if (B[j] == '0') {
                        dp[i][j+1] = min(dp[i][j+1], cur + ones);
                    } else {
                        dp[i][j+1] = min(dp[i][j+1], cur);
                    }
                }
            }
        }
        cout << dp[N][N] << "\n";
    }
}
