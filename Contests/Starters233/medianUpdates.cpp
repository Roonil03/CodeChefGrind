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
    string s;
    cin >> s;
    vector<int> b(n);
    int g {0};
    for (int i {0}; i < n; i++){
        int l = (i - 1 + n) % n;
        int r = (i + 1) % n;
        bool fg = (s[i] == s[l] || s[i] == s[r]);
        b[i] = !fg;
        g += fg;
    }
    if (g == 0){
        cout << -1 << endl;
        return;
    }
    int cur {0}, x {0};
    for (int i {0}; i < 2 * n; i++){
        if (b[i % n]){
            cur++;
        } else{
            cur = 0;
        }
        x = max(x, cur);
    }
    int res = (x + 1) / 2 + 1;
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
    while(t--){
        solve();
    }
    return 0;
}