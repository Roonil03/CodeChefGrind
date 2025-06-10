#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int e = max(c, d);
        auto calc = [&](int x){
            int y {n-x};
            return a * x + b * y + e * x * y;
        };
        int res = max(calc(0), calc(n));
        if (res > 0){
            double op = (double)(a - b + e * n) / (2.0 * e);
            if(op >= 0 && op <= n){
                int x1 = floor(op), x2 = ceil(op);
                res = max(res, calc(x1));
                if (x1 != x2){
                    res = max(res, calc(x2));
                }
            }
        }
        cout << res << endl;
    }
}
