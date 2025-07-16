#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T{};
    cin >> T;
    const ll NEG{-(1LL << 60)};
    while (T--) {
        int N{}, K{}, A{};
        cin >> N >> K >> A;
        vector<int> f(K);
        for (int &x : f) cin >> x;
        vector<vector<int>> g(N + 1);
        for (int i{1}; i < N; ++i) {
            int u{}, v{};
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<int> da(N + 1, -1);
        queue<int> q;
        da[A] = 0;
        q.push(A);
        while (!q.empty()) {
            int x{q.front()}; q.pop();
            for (int y : g[x])
                if (da[y] == -1) {
                    da[y] = da[x] + 1;
                    q.push(y);
                }
        }
        vector<ll> val(N + 1, NEG);
        vector<int> src(N + 1, 0);
        priority_queue<pair<ll, int>> pq;
        for (int x : f) {
            val[x] = da[x];
            src[x] = x;
            pq.push({val[x], x});
        }
        while (!pq.empty()) {
            auto [w, x] = pq.top(); pq.pop();
            if (w != val[x]) continue;
            for (int y : g[x]) {
                ll nv{w - 1};
                if (nv > val[y]) {
                    val[y] = nv;
                    src[y] = src[x];
                    pq.push({nv, y});
                }
            }
        }
        for (int i{1}; i <= N; ++i) {
            if (i > 1) cout << ' ';
            cout << val[i];
        }
        cout << '\n';
        for (int i{1}; i <= N; ++i) {
            if (i > 1) cout << ' ';
            cout << src[i];
        }
        cout << '\n';
    }
}
