#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    int T; 
    cin >> T;
    while(T--){
        int n; 
        cin >> n;
        vector<ll>L(n), R(n);
        for(int i = 0; i < n; ++i){
            cin >> L[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> R[i];
        }
        if(n == 1){
            cout << 0 << "\n";
            continue;
        }
        ll ans = 0;
        for(int i = 0; i + 1 < n; ++i){
            ans += min(R[i], L[i+1]);
        }
        cout << ans << "\n";
    }
}
