#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(n & 1){
            ll s{};
            for(ll x:a) s+=x;
            cout << ((s & 1) ? "CHEF\n" : "CHEFINA\n");
        } else {
            ll s{}, m{LLONG_MAX};
            for(ll x:a){
                s+=x;
                m = min(m, x);
            }
            cout << (((s & 1) || (m & 1)) ? "CHEF\n" : "CHEFINA\n");
        }
    }
}
