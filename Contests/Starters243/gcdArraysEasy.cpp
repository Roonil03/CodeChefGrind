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

int mu[105];
int mod = 998244353;

void precomp(){
    mu[1] = 1;
    for (int i {1}; i <= 100; ++i) {
        for (int j = 2 * i; j <= 100; j += i) {
            mu[j] -= mu[i];
        }
    }
}

ll pow1(ll base, ll exp) {
    ll res {1};
    base %= mod;
    while (exp > 0){
        if (exp % 2 == 1){
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

void solve(){
    int n, m;
    cin >> n >> m;
    // vector<int>arr(n);
    // cin >> arr;
    ll res {0};
    for(int i {2}; i <= m; i++){
        for(int j {2}; j <= m; j++){
            if(gcd(i, j) != 1){
                continue;
            }
            ll cur {0};
            for(int k {1}; k * i <= m; k++){
                if(mu[k] == 0){
                    continue;
                }
                for(int l {1}; j * l <= m; l++){
                    if(mu[l] == 0){
                        continue;
                    }
                    int a = i * k;
                    int b = j * l;
                    int c = a * b / gcd(a, b);
                    if(c > m){
                        continue;
                    }
                    ll w = 1LL * (m / a) * (m / b) % mod;
                    w = (w * pow1(m / c, n - 2)) % mod;
                    int sign = mu[k] * mu[l];
                    if(sign == 1){
                        cur = (cur + w) % mod;
                    } else if(sign == -1){
                        cur = (cur - w + mod) % mod;
                    }
                }
            }
            res = (res + cur) % mod;
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