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
ll fact[200005], inv[200005];

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
    for(int i {1}; i < 200005; i++){
        fact[i] = (fact[i-1] * i) % mod;
    }
    inv[200004] = pow1(fact[200004], mod - 2);
    for(int i = 200003; i >= 1; i--){
        inv[i] = (inv[i+1] * (i + 1)) % mod;
    }
}

void solve(){
    int n;
    cin >> n;
    // vector<int>arr(n);
    // cin >> arr;
    string a;
    cin >> a;
    // int j {0};
    // for(int i {0}; i < n; i++){
    //     if(j < n && a[i] == b[j]){
    //         char c = b[j];
    //         while(j < n && b[j] == c){
    //             j++;
    //         }
    //     }
    // }
    // cout << (j == n ? "Yes" : "No") << endl;
    int m {1};
    for(int i {1}; i < n; i++){
        if(a[i] != a[i-1]){
            m++;
        }
    }
    ll sum {0};
    for(int i {0}; i <= m - 2; i++){
        sum = (sum + nCr(n - 1, i)) % mod;
    }
    ll res = (2 * sum) % mod;
    res = (res + nCr(n - 1, m - 1)) % mod;
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