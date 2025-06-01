#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--) {
        ll N, K;
        cin >> N >> K;
        if (K >= N - 1) {
            cout << 1 << endl;
            continue;
        }
        ll L = 2 + K + (K - 1) / 2;
        ll x = (N - 1) / L + 1;
        ll y = 0;
        if (N >= K + 2) {
            y = (N - K - 2) / L + 1;
        }
        ll sum = x + 2 * y;
        cout << sum << endl;
    }
    return 0;
}
