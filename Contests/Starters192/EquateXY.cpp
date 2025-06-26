#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> h1(ll n){
    vector<ll> r;
    for(ll i = 1; i * i <= n; i++){
        if (n % i == 0){
            r.push_back(i);
            if(i * i != n){
                r.push_back(n / i);
            }
        }
    }
    return r;
}

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll x, y, z, c;
        cin >> x >> y>> z >> c;
        if (x == y){
            cout << "0" << endl;
            continue;
        }
        ll res = LLONG_MAX;
        // if(y != 0 && x % y == 0){
        //     res = min(res, c + llabs(z - x));
        // }
        // if(x != 0 && y % x == 0){
        //     res = min(res, c + llabs(z - y));
        // }
        // ll d = gcd(x, y);
        // vector<ll> a;
        // for(ll i = 1; i < d; i++){
        //     if(d % i == 0){
        //         a.push_back(i);
        //         if(i != d / i){
        //             a.push_back(d / i);
        //         }
        //     }
        // }
        // for(ll i : a){
        //     ll s = 2 * c + llabs(z - i) + llabs(y - i);
        //     res = min(res, s);
        //     s = 2 * c + llabs(z - i) + llabs(x - i);
        //     res = min(res, s);
        // }
        // cout << res << endl;
        for(ll i : h1(x)){
            if(i % y == 0){
                res = min(res, c + llabs(z - i));
            }
        }
        for(ll i : h1(y)){
            if(i % x == 0){
                res = min(res, c + llabs(z - i));
            }
        }
        res = min(res, 2 * c);
        cout << res << endl;
    }
}
