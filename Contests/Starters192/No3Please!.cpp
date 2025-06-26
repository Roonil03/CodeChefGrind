#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // vector<int>a;
        // for(int i{0}; i < n; i++){
        //     a[i] = 0;
        // }
        vector<int> a(n);
        for(int i {0}; i < n; ++i){
            cin >> a[i];
        }
        vector<int> P(n+1);
        for(int i {1}; i <= n; ++i){
            P[i] = (P[i-1] + a[i-1]) % 3;
        }
        int z0 = 0;
        for(int i {1}; i <= n; ++i){
            if(P[i] == 0){
                z0 = i;
            }
        }
        if(z0 == 0){
            cout << "Yes\n";
            continue;
        }
        array<bool,3> seen = {false,false,false};
        seen[P[0]] = true;
        bool ok = false;
        for(int i = 1; i <= n; ++i){
            if(i >= z0 && !seen[P[i]]){
                ok = true;
                break;
            }
            seen[P[i]] = true;
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
}
