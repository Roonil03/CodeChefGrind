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

void solve(){
    int n;
    cin >> n;
    int mod = 998244353;
    vector<int> par(n+1);
    for(int i {2}; i < sz(par); i++){
        cin >> par[i];
    }
    vector<ll> sub(n + 1, 1), c(n+1);
    for(int i = n; i >= 2; i--){
        int p = par[i];
        c[p] += sub[i] * sub[i];
        sub[p] += sub[i];
    }
    ll res {0};
    for(int i {1}; i <= n; i++){
        ll a = sub[i] * sub[i] - c[i];
        res = (res + (ll)((__int128)i * (a % mod) % mod)) % mod;
    }
    cout << res  % mod << endl;
    // cout << arr;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(nullptr);
    cin.exceptions(cin.failbit);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}