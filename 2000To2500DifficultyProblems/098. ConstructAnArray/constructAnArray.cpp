#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n {}, m {};
        cin >> n >> m;
        vector<int> a(n);
        for (int i {}; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i {}; i < n; ++i) {
            vector<int> f(m + 1, 0);
            for (int j {}; j < i; ++j) {
                f[b[j]]++;
            }
            vector<int> v;
            for (int x {1}; x <= m; ++x) {
                vector<int> tf = f;
                tf[x]++;
                int fa = tf[a[i]];
                int mx = *max_element(tf.begin() + 1, tf.end());
                if (fa >= mx) {
                    v.push_back(x);
                }
            }
            if (v.size() == 1) {
                b[i] = v[0];
            } else {
                int best = v[0];
                for (int x : v) {
                    bool x_is_ai = (x == a[i]);
                    bool best_is_ai = (best == a[i]);
                    
                    if (!x_is_ai && best_is_ai) {
                        best = x;
                    } else if (x_is_ai == best_is_ai && f[x] < f[best]) {
                        best = x;
                    }
                }
                b[i] = best;
            }
        }
        for (int i {}; i < n; ++i) {
            cout << b[i];
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
}
