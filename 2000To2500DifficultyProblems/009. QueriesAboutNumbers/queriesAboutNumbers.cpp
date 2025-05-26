#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, q;
    cin >> n >> q;
    vector<pair<ll, int>> nf;
    ll x = n;
    for (ll i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            int cnt = 0;
            while (x % i == 0) {
                cnt++;
                x /= i;
            }
            nf.emplace_back(i, cnt);
        }
    }
    if (x > 1) {
        nf.emplace_back(x, 1);
    }
    ll td = 1;
    for (auto& [p, e] : nf) {
        td *= (e + 1);
    }
    while (q--) {
        int t;
        ll k;
        cin >> t >> k;
        
        if (t == 1) {
            ll ans = 1;
            ll kx = k;
            for (auto& [p, e] : nf) {
                int pc = 0;
                while (kx % p == 0) {
                    pc++;
                    kx /= p;
                }
                ans *= (min(e, pc) + 1);
            }
            cout << ans << '\n';
        } else {
            ll ans = 1;
            ll kx = k;
            for (auto& [p, e] : nf) {
                int pc = 0;
                while (kx % p == 0) {
                    pc++;
                    kx /= p;
                }
                if (pc > e) {
                    ans = 0;
                    break;
                }
                ans *= (e - pc + 1);
            }
            if (kx > 1) {
                ans = 0;
            }
            if (t == 2) {
                cout << ans << '\n';
            } else {
                cout << td - ans << '\n';
            }
        }
    }
    return 0;
}
