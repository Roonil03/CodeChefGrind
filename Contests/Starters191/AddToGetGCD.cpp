#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        if(gcd(x, y) > 1){
            cout << 0 << endl;
        } else if(gcd(x + 1, y) > 1 || gcd(x,  y + 1) > 1){
            cout << 1 << endl;
        } else{
            cout << 2 << endl;
        }
    }
}
