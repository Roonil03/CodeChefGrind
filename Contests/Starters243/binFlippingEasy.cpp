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
ll fact[105], inv[105];

ll pow1(ll base, ll exp){
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

ll modinv(ll n){
    return pow1(n, mod - 2);
}

void precomp(){
    fact[0] = 1;
    inv[0]  = 1;
    for (int i {1}; i <= 100; i++){
        fact[i] = (fact[i - 1] * i) % mod;
    }
    inv[100] = modinv(fact[100]);
    for (int i = 99; i >= 1; i--){
        inv[i] = (inv[i + 1] * (i + 1)) % mod;
    }
}

ll nCr(int n, int r){
    if (r < 0 || r > n){
        return 0;
    }
    return fact[n] * inv[r] % mod * inv[n - r] % mod;
}

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    cin >> arr;
    vector<vector<vll>> dp(n + 1, vector<vll>(2, vll(n + 1, 0)));
    if (arr[0] == 0 || arr[0] == -1){
        dp[1][0][0] = 1;
    }
    if (arr[0] == 1 || arr[0] == -1){
        dp[1][1][0] = 1;
    }
    for (int i {1}; i < n; i++){
        for (int j {0}; j <= 1; j++){
            for (int k {0}; k <= i; k++){
                if (!dp[i][j][k]){
                    continue;
                }
                for (int l {0}; l <= 1; l++){
                    if (arr[i] == l || arr[i] == -1){
                        int z = j ^ l ^ (i % 2);
                        dp[i + 1][l][k + z] += dp[i][j][k];
                        if (dp[i + 1][l][k + z] >= mod){
                            dp[i + 1][l][k + z] -= mod;
                        }
                    }
                }
            }
        }
    }
    ll res {0};
    for (int c {0}; c <= n; c++){
        ll w = (dp[n][0][c] + dp[n][1][c]) % mod;
        if (w > 0){
            res = (res + w * nCr(n - 1, c)) % mod;
        }
    }
    cout << res << endl;
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