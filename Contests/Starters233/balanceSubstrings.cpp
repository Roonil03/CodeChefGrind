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

ll mod = 998244353;
vi tt;
vll fact, ifact, pw2;
int x = 0;

ll modPow(ll a, ll e){
    ll r {1};
    a %= mod;
    while(e > 0){
        if(e & 1){
            r = r * a % mod;
        }
        a = a * a % mod;
        e >>= 1;
    }
    return r;
}

ll h1(int n, int k){
    if(n < 0 || k < 0 || k > n){
        return 0;
    }
    return fact[n] * ifact[k] % mod * ifact[n - k] % mod;
}

void precomp(){
    fact.assign(x + 1, 1);
    ifact.assign(x + 1, 1);
    pw2.assign(x + 1, 1);
    for(int i {1}; i <= x; i++){
        fact[i] = fact[i - 1] * i % mod;
        pw2[i] = pw2[i - 1] * 2 % mod;
    }
    ifact[x] = modPow(fact[x], mod - 2);
    for(int i = x; i >= 1; i--){
        ifact[i - 1] = ifact[i] * i % mod;
    }
}


void solve(int n){
    // int n;
    // cin >> n;
    ll t = (ll)n * (n + 1) / 2;
    ll res {0};
    for(int m {0}; m <= n / 2; m++){
        ll cnt = pw2[m] * ((h1(n - m, m) + h1(n - 1 - m, m)) % mod) % mod;
        ll g = (t % mod - (ll)m * (n - m) % mod + mod) % mod;
        res = (res + cnt * modPow(g, n)) % mod;
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
    vi tt(t);
    for(int i {0}; i < t; i++){
        cin >> tt[i];
        x = max(x, tt[i]);
    }
    precomp();
    for(int n : tt){
        solve(n);
    }
    return 0;
}