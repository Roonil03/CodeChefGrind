#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--){
        int n, c;
        cin >> n >> c;
        vector<int> a(n), b(n);
        for (int i{0}; i < n; i++){
            cin >> a[i];
        }
        for (int i {0}; i < n; i++){
            cin >> b[i];
        }
        map<int, int> m;
        for(int i{0}; i < n; i++){
            if (m.count(a[i]) == 0){
                m[a[i]] = b[i];
            } else{
                m[a[i]] = min(m[a[i]], b[i]);
            }
        }
        ll res = 0;
        for(auto& p : m){
            int temp = c - p.second;
            if (temp > 0){
                res += temp;
            }
        }
        cout << res << endl;
    }
}
