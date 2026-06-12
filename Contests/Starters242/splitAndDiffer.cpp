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

void precomp(){

}

void solve(){
    int n;
    cin >> n;
    vector<ll> arr(n);
    cin >> arr;
    auto h1 = [](ll x) {
        vector<vector<ll>> res;
        res.push_back({x});
        for (ll a {1}; a <= 4; a++) {
            ll b = x - a;
            if (b > 0 && a != b) {
                res.push_back({a, b});
                res.push_back({b, a});
            }
        }
        for (ll a {1}; a <= 4; a++) {
            for (ll b {1}; b <= 4; b++) {
                ll mid = x - a - b;
                if (mid > 0 && a != mid && mid != b) {
                    res.push_back({a, mid, b});
                }
            }
        }
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    };
    vector<vector<vll>> c(n);
    for(int i {0}; i < n; i++) {
        c[i] = h1(arr[i]);
    }
    vector<vector<int>> p(n);
    vector<vector<bool>> dp(n);
    for(int i {0}; i < n; i++) {
        p[i].assign(c[i].size(), -1);
        dp[i].assign(c[i].size(), false);
    }
    for(int i {0}; i < c[0].size(); i++) {
        dp[0][i] = true;
    }
    for(int i {1}; i < n; i++) {
        for(int j {0}; j < c[i].size(); j++) {
            for(int k {0}; k < c[i-1].size(); k++) {
                if(dp[i-1][k] && c[i-1][k].back() != c[i][j].front()) {
                    dp[i][j] = true;
                    p[i][j] = k;
                    break;
                }
            }
        }
    }
    int id = -1;
    for(int i {0}; i < c[n-1].size(); i++) {
        if(dp[n-1][i]) {
            id = i;
            break;
        }
    }
    if(id == -1) {
        cout << -1 << endl;
        return;
    }
    vector<int> path(n);
    int cur = id;
    for(int i = n - 1; i >= 0; i--) {
        path[i] = cur;
        if (i > 0){
            cur = p[i][cur];
        }
    }
    vector<ll> b;
    for(int i {0}; i < n; i++) {
        for(ll val : c[i][path[i]]) {
            b.push_back(val);
        }
    }
    cout << b.size() << endl;
    for(int i {0}; i < b.size(); i++) {
        cout << b[i] << (i == (int)b.size() - 1 ? "" : " ");
    }
    cout << endl;
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