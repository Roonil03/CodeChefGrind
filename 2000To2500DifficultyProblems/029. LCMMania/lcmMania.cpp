#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        // long long n;
        // cin >> n;
        // if (n % 3 == 0) {
        //     long long k = n / 3;
        //     cout << k << " " << k << " " << k << "\n";
        // } else if (n % 2 == 1 && n >= 3) {
        //     long long k = (n - 1) / 2;
        //     cout << "1 1 " << k << "\n";
        // } else {
        //     cout << "-1\n";
        // }
        long long n;
        cin >> n;
        long long mul = 1;
        while (n % 2 == 0) {
            n /= 2;
            mul *= 2;
        }
        if (n == 1) {
            cout << "-1\n";
        } else {
            cout << mul * (n / 2) << " " << mul << " " << mul << "\n";
        }
    }
}
