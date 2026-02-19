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
    int n;
    cin >> n;
    vector<int>arr(n);
    cin >> arr;
    int m {0};
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    for(int i{0}; i < n; i++){
        pq.push({arr[i], i});
        if(arr[i] > m){
            m = arr[i];
        }
    }
    int m1 = m;
    int res = m - pq.top().first;
    while(pq.top().first < m1){
        pii t = pq.top();
        pq.pop();
        int nt = t.first*2;
        if(nt > m){
            m = nt;
        }
        pq.push({nt, t.second});
        res = min(res, m - pq.top().first);
    }
    cout << res << endl;
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