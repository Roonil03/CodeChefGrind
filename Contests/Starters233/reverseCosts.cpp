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
vector<ll> fact{1}, ifact{1};

ll modPow(ll a, ll e){
    ll r = 1;
    while(e > 0){
        if(e & 1){
            r = r * a % mod;
        }
        a = a * a % mod;
        e >>= 1;
    }
    return r;
}

template<typename T>
vector<int> a2(const vector<T>& s){
    int n = sz(s);
    vi pi(n, 0);
    for(int i = 1; i < n; i++){
        int j = pi[i - 1];
        while(j > 0 && s[i] != s[j]){
            j = pi[j - 1];
        }
        if(s[i] == s[j]){
            j++;
        }
        pi[i] = j;
    }
    return pi;
}

template<typename T>
bool a3(const vector<T>& a){
    int n = sz(a);
    vector<T> pat(a.rbegin(), a.rend());
    auto pi = a2(pat);
    int j = 0;
    for(int i {0}; i < 2 * n - 1; i++){
        T x = a[i % n];
        while(j > 0 && x != pat[j]){
            j = pi[j - 1];
        }
        if(x == pat[j]){
            j++;
        }
        if(j == n){
            return true;
        }
    }
    return false;
}

template<typename T>
int a1(const vector<T>& s){
    int n = sz(s);
    auto pi = a2(s);
    int p = n - pi[n - 1];
    return (n % p == 0 ? p : n);
}

void h1(int n){
    int cur = sz(fact) - 1;
    if(cur >= n){
        return;
    }
    fact.resize(n + 1);
    for(int i = cur + 1; i <= n; i++){
        fact[i] = fact[i - 1] * i % mod;
    }
    ifact.resize(n + 1);
    ifact[n] = modPow(fact[n], mod - 2);
    for(int i = n; i > cur; i--){
        ifact[i - 1] = ifact[i] * i % mod;
    }
}

void precomp(){

}

void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);
    cin >> arr;
    h1(n);
    unordered_map<int, int> freq;
    for(int x : arr){
        freq[x]++;
    }
    ll tot = fact[n];
    for(auto &it : freq){
        tot = tot * ifact[it.second] % mod;
    }
    int p = a1(arr);
    int dd = a3(arr) ? p : 2 * p;
    bool fg = true;
    for(int i {0}; i < n; i++){
        if(arr[i] != arr[n - 1 - i]){
            fg = false;
            break;
        }
    }
    int rev = fg ? 0 : 1;
    ll b = (n - 2) % mod;
    if(b < 0){
        b += mod;
    }
    ll res = b * tot % mod;
    res = (res + dd + 2 + rev) % mod;
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