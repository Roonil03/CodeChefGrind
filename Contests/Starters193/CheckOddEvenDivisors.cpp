#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if(a >= 1 && b % a == 0){
            cout << "yes\n";
        } else{
            cout << "no\n";
        }
    }
}
