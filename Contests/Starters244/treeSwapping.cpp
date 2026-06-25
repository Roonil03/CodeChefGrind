#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize ("O3")
// #pragma GCC target("avx2, bmi, bmi2, popcnt")

#define sz(x) ((int)x.size())
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<long long>

template<typename T>
istream& operator>>(istream& is, vector<T>& v){
    for (T& x : v) is >> x;
    return is;
}

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
    for (int i = 0; i < v.size(); i++){
        os << v[i];
        if (i + 1 < v.size()) os << " ";
    }
    return os;
}

int mod = 998244353;
const int maxn = 5005;
ll fact[maxn], inv[maxn];

ll pow1(ll base, ll exp){
    ll res {1};
    base %= mod;
    while(exp > 0){
        if(exp % 2 == 1){   
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

ll nCr(int n, int r){
    if(r < 0 || r > n){
        return 0;
    }
    return fact[n] * inv[r] % mod * inv[n - r] % mod;
}

void precomp(){
    fact[0] = 1;
    inv[0] = 1;
    for(int i {1}; i < maxn; i++){
        fact[i] = (fact[i-1] * i) % mod;
    }
    inv[maxn - 1] = pow1(fact[maxn - 1], mod - 2);
    for(int i = maxn - 2; i >= 1; i--){
        inv[i] = (inv[i+1] * (i + 1)) % mod;
    }
}

ll modInv(ll n){
    return pow1(n, mod - 2);
}

void solve(){
    int n;
    cin >> n;
    // vector<int>arr(n);
    // cin >> arr;
    vector<vi> adj(n);
    for(int i {0}; i < n - 1; i++){
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    string s, t;
    cin >> s >> t;
    vi q(n, 0), c(n, 0), count(n, 0);
    auto dfs = [&](auto& self, int u, int p) -> void{
        if(s[u] == '?'){
            q[u] = 1;
        } else if(s[u] == '1'){
            c[u] = 1;
        }
        if(t[u] == '1'){
            count[u] = 1;
        }
        for(int v : adj[u]){
            if(v != p){
                self(self, v, u);
                q[u] += q[v];
                c[u] += c[v];
                count[u] += count[v];
            }
        }
    };
    dfs(dfs, 0, -1);
    int qq = q[0], cc = c[0], kk = count[0];
    if(kk < cc || kk > cc + qq){
        cout << 0 << endl;
        return;
    }
    int r = kk - cc;
    ll res {0};
    for(int i {1}; i < n; i++){
        int qi = q[i];
        int ci = c[i];
        int ti = count[i];
        int x1 = max(0, r - (qq - qi));
        int x2 = min(qi, r);
        for(int j = x1; j <= x2; j++){
            ll w = nCr(qi, j) * nCr(qq - qi, r - j) % mod;
            ll dif = abs(ci + j - ti);
            res = (res + w * dif) % mod;
        }
    }
    cout << res << endl;
    // cout << arr;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(nullptr);
    cin.exceptions(cin.failbit);
    int t;
    cin >> t;    
    precomp();
    while(t--){
        solve();
    }
    return 0;
}