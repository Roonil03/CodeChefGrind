#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t {};
    cin >> t;
    while(t--){
        ll x {}, y {};
        cin >> x >> y;
        ll n2 = x + y;
        ll n = sqrt(n2);
        if(n * n != n2){
            cout << "NO\n";
            continue;
        }
        if(y % 2 != 0){
            cout << "NO\n";
            continue;
        }
        ll ab = y / 2;
        ll d = n * n - 4 * ab;
        if(d < 0){
            cout << "NO\n";
            continue;
        }
        ll sd = sqrt(d);
        if(sd * sd != d){
            cout << "NO\n";
            continue;
        }
        ll a = (n + sd) / 2;
        ll b = (n - sd) / 2;
        if(a <= 0 || b <= 0){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        cout << n << "\n";
        for(int i = 2; i <= b + 1; i++){
            cout << "1 " << i << "\n";
        }
        if(b + 2 <= n){
            for(int i = b + 2; i <= n; i++){
                cout << "2 " << i << "\n";
            }
        }
    }
}
