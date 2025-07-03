#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int m = n - k + 1;
        for(int i {1}; i <= m; i++){
            cout << (m + 1 - i) << " ";
        }
        for(int i = m + 1; i <= n; i++){
            cout << i << (i < n ? " " : "");
        }
        cout << endl;
    }
}
