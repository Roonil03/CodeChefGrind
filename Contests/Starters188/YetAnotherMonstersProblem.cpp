#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t{0};
    cin >> t;
    while(t--){
        int n{0};
        cin >> n;
        vector<int> a(n);
        for(int i{0}; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int res{n};
        for(int i{0}; i < n; i++){
            int c = n-i-1;
            int x = a[i];
            while(i + 1 < n && a[i+1] == a[i]){
                i++;
                c--;
            }
            res = min(res, x + c);
        }
        cout << res << endl;
    }
}
