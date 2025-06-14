#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int>a(n), b(n);
        for(int i{0}; i < n; i++){
            cin >> a[i];
        }
        for(int i{0}; i < n; i++){
            cin >> b[i];
        }
        vector<int>z(n+2, 0);
        for(int i = n; i >= 1; i--){
            int p  = a[i-1], q = b[i-1];
            int d = max(p, z[i+1]);
            int r = max(q, z[i+1] + 1);
            z[i] = min(d, r);
        }
        int w = x, res {0};
        for(int i{1}; i<=n;i++){
            int v = b[i-1];
            if(w >= v && (w - 1) >= z[i+1]){
                res++;
                w--;
            }
        }
        cout << res << endl;
    }
}
