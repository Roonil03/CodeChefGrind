#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n), p(n + 1, 0);
    for (int i {0}; i < n; i++) {
        cin >> a[i];
    }
    for (int i {0}; i < n; i++) {
        p[i + 1] = p[i] + a[i];
    }
    ll total = (ll)n * (n + 1) / 2;
    if (k > total) {
        k = total;
    }
    priority_queue<tuple<ll, int, int>> pq;
    for (int i {0}; i < n; i++) {
        pq.emplace(p[n] - p[i], i, n);
    }
    vector<ll> res;
    res.reserve((size_t)k);
    while (k-- > 0 && !pq.empty()) {
        auto [s, i, j] = pq.top();
        pq.pop();
        res.push_back(s);
        if (j - 1 > i) {
            pq.emplace(p[j - 1] - p[i], i, j - 1);
        }
    }
    for (size_t i {0}; i < res.size(); i++) {
        if (i) cout << ' ';
        cout << res[i];
    }
    cout << "\n";
}
