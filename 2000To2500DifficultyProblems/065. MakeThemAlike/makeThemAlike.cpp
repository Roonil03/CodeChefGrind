#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 200000;
const int MOD = 1000000007;
int p[MAXN+5], a[MAXN+5], oute[MAXN+5], indeg[MAXN+5], q[MAXN+5];

ll modexp(ll b, ll e) {
    ll r = 1;
    while (e) {
        if (e & 1) r = r * b % MOD;
        b = b * b % MOD;
        e >>= 1;
    }
    return r;
}

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    cin >> T;
    while (T--) {
        int n; ll M;
        cin >> n >> M;
        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
        }
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            indeg[i] = 0;
        }
        for (int i = 1; i <= n; ++i) {
            if (p[i] >= i) 
                oute[i] = p[i];
            else 
                oute[i] = oute[p[i]];
            indeg[oute[i]]++;
        }
        int qt = 0, qh = 0;
        for (int i = 1; i <= n; ++i) {
            if (indeg[i] == 0) 
                q[qt++] = i;
        }
        ll ans = 1;
        while (qh < qt) {
            int u = q[qh++];
            if (a[u] == 0) 
                ans = ans * M % MOD;
            int v = oute[u];
            if (--indeg[v] == 0) 
                q[qt++] = v;
        }
        ll cntv = 0;
        ll val = -1;
        for (int i = 1; i <= n; ++i) {
            if (indeg[i] > 0) {
                if (a[i] != 0) {
                    if (val == -1) 
                        val = a[i];
                    else if (val != a[i]) {
                        ans = 0;
                        break;
                    }
                }
            }
        }
        if (ans) {
            if (val == -1) 
                ans = ans * M % MOD;
        }
        cout << ans << "\n";
    }
}
