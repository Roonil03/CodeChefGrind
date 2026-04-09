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
    for (int i = 0; i < (int)v.size(); i++){
        os << v[i];
        if (i + 1 < (int)v.size()) os << " ";
    }
    return os;
}

void solve(){
    int n;
    cin >> n;
    vector<pii> val;
    for(int i {0}; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        val.push_back({a, i});
        val.push_back({b, i});
        val.push_back({c, i});
    }
    sort(val.begin(), val.end());
    vector<int> cnt(n, 0);
    int cov {0}, l {0};
    ll res = (ll)4e18;
    for(int r {0}; r < 3 * n; r++){
        int id = val[r].second;
        if(cnt[id]++ == 0){
            cov++;
        }
        while(cov == n){
            res = min(res, 1LL * val[r].first - val[l].first);
            int q = val[l].second;
            if(--cnt[q] == 0){
                cov--;
            }
            l++;
        }
    }
    cout << res << '\n';
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