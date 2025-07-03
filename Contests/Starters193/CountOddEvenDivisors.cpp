#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll h1(int n){
    int x = n;
    while(x % 2 == 0){
        x /= 2;
    }
    ll o {1};
    for(int p {3}; p * p <= x; p+=2){
        if(x % p == 0){
            int e {0};
            while(x % p == 0){
                x /= p;
                e++;
            }
            o *= (e + 1);
        }
    }
    if (x > 1){
        o *= 2;
    }
    return o;
}

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a = h1(n);
        int e {0}, temp = n;
        while(temp % 2 == 0){
            temp /= 2;
            e++;
        }
        ll tot = (ll)(e + 1) * a;
        ll b = tot - a;
        cout << a << " " << b << endl;
    }
}
