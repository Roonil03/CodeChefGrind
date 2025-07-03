#include <bits/stdc++.h>
using namespace std;
using  ll = long long;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T{0};
    cin >> T;
    while (T--) {
        int n{0};
        cin >> n;
        ll answer{0};
        map<int,int> cnt;
        vector<vector<int>> a(n);
        for (int i{0}; i < n; i++) {
            int sz{0};
            cin >> sz;
            a[i].reserve(sz);
            for (int j{0}; j < sz; j++) {
                int x{0};
                cin >> x;
                a[i].push_back(x);
                cnt[abs(x)]++;
            }
        }
        for (int i{0}; i < n; i++) {
            vector<pair<int,int>> ord;
            array<int,2> contrib{0,0};
            for (int x : a[i]) {
                if (x < 0) {
                    ord.emplace_back(-x,1);
                    contrib[1]++;
                } else {
                    ord.emplace_back(x,0);
                    contrib[0]++;
                }
            }
            sort(ord.begin(), ord.end());
            for (auto &pr : ord) {
                int d{pr.first}, t{pr.second};
                contrib[t]--;
                bool single = (cnt[d] <= 1);
                answer += contrib[t ^ single];
            }
        }
        for (auto &pr : cnt) {
            if (pr.second > 1) answer++;
        }
        cout << answer << '\n';
    }
}
