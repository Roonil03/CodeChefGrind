#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--) {
        ll X, Y;
        cin >> X >> Y;
        if (Y % X != 0) {
            cout << "-1\n";
            continue;
        }
        ll S = Y / X;
        ll min_time = LLONG_MAX;
        for (int k = 1; k <= 60; ++k) {
            ll T_val = S + k;
            int cnt = __builtin_popcountll(T_val);
            if (cnt != k){
                continue;
            }
            ll sum_pos = 0;
            for (int i = 0; i < 60; ++i) {
                if (T_val & (1LL << i)) sum_pos += i;
            }
            ll current_time = sum_pos + (k - 1);
            if (current_time < min_time) {
                min_time = current_time;
            }
        }
        if (min_time == LLONG_MAX) {
            cout << "-1\n";
        } else {
            cout << min_time << "\n";
        }
    }
    return 0;
}
