#include <bits/stdc++.h>

using namespace std;

#define sz(x) ((int)x.size());
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>

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
    int n, a, b;
    cin >> n >> a >> b;
    while(n >= a){
        n -= a - b;
    }
    cout << n << endl;
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