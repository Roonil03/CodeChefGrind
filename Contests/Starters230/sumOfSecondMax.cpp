#include <bits/stdc++.h>

using namespace std;

#define sz(x) ((int)x.size())
using ll = long long;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>

template<typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (T& x : v) is >> x;
    return is;
}

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        os << v[i];
        if (i + 1 < v.size()) os << " ";
    }
    return os;
}

void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);
    cin >> arr;
    vi pos(n + 1);
    for(int i {0} ; i < n; i++){
        pos[arr[i]] = i + 1;
    }
    vi next(n + 2), prev(n + 2);
    for(int  i {0}; i <= n + 1; i++){
        next[i] = i + 1;
        prev[i] = i - 1;
    }
    prev[0] = 0;
    next[n + 1] = n + 1;
    ll res {0};
    for(int i {1}; i <= n; i++){
        ll id = pos[i];
        ll l1 = prev[id];
        ll l2 = prev[l1];
        ll r1 = next[id];
        ll r2 = next[r1];
        ll c1 = (l1 >= 1 ? ll(l1 - l2) * (r1 - id) : 0);
        ll c2 = (r1 <= n ? ll(id - l1) * (r2 - r1) : 0);
        res += i * (c1 + c2);
        next[l1] = r1;
        prev[r1] = l1;
    }
    cout << res << endl;
    // cout << arr;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}