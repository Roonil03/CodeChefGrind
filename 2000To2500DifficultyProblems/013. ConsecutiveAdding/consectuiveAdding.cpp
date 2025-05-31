#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c, x;
        cin >> r >> c >> x;
        vector<vector<ll>> a(r, vector<ll>(c));
        vector<vector<ll>> b(r, vector<ll>(c));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> b[i][j];
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j <= c - x; j++) {
                ll diff = b[i][j] - a[i][j];
                for (int k = j; k < j + x; k++) {
                    a[i][k] += diff;
                }
            }
        }
        for (int j = 0; j < c; j++) {
            for (int i = 0; i <= r - x; i++) {
                ll f = b[i][j] - a[i][j];
                for (int k = i; k < i + x; k++) {
                    a[k][j] += f;
                }
            }
        }
        bool p = true;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] != b[i][j]) {
                    p = false;
                    break;
                }
            }
            if (!p){
                break;
            }
        }
        cout << (p ? "Yes" : "No") << "\n";
    }
    return 0;
}
