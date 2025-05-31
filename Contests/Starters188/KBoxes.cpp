#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    int t{0};
    cin >> t;   
    while(t--){
        int n{0}, k{0};
        cin >> n >> k;
        vector<int>a(n), b(n);
        vector<tuple<int, int, int>> c(n);
        for(int i{0}; i < n; i++){
            cin >> a[i];
        }
        for(int i{0}; i < n; i++){
            cin >> b[i];
            c[i] = {a[i], b[i], i};
        }
        sort(c.begin(), c.end());
        vector<ll> res(n);
        priority_queue<int, vector<int>, greater<int>> h;
        ll sum {0};
        for(int i{0}; i < n; i++){
            auto[p ,q ,r] = c[i];
            res[r] = sum;
            if(h.size() < k){
                h.push(q);
                sum += q;
            } else if(q > h.top()){
                sum -= h.top();
                h.pop();
                h.push(q);
                sum += q;
            }
        }
        
        for(int i{0}; i < n; i++){
            cout << res[i];
            if(i < n-1){
                cout<< " ";
            }
        }
        cout << endl;
    }
}
