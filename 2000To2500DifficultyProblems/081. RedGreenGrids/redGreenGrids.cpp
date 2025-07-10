#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 998244353;

ll power(ll a, ll b, ll mod) {
    ll res {1};
    a %= mod;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

ll modInverse(ll a, ll mod) {
    return power(a, mod - 2, mod);
}

vector<ll> fact, inv_fact;

void precompute(int n) {
    fact.resize(n + 1);
    inv_fact.resize(n + 1);
    fact[0] = 1;
    for (int i {1}; i <= n; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    inv_fact[n] = modInverse(fact[n], MOD);
    for (int i = n - 1; i >= 0; i--) {
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD;
    }
}

ll nCr(int n, int r) {
    if (r > n || r < 0) return 0;
    return (fact[n] * inv_fact[r] % MOD) * inv_fact[n - r] % MOD;
}

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute(2000);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int p = n + m - 1;
        if (p % 2 == 1) {
            cout << 0 << "\n";
            continue;
        }
        ll tp = nCr(n + m - 2, n - 1);
        ll wp = nCr(p, p / 2);
        ll wr = power(2, n * m - p, MOD);
        ll ans = (tp * wp % MOD) * wr % MOD;
        cout << ans << "\n";
    }
}
