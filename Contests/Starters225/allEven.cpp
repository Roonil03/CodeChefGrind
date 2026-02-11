#include <bits/stdc++.h>

using ll = long long;
// using sz(x) = x.size();
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);
    int o{0};
    for(int i {0}; i < n; i++){
        cin >> arr[i];
        if(arr[i]&1){
            o++;
        }
    }
    if(o&1){
        cout << "No\n";
    } else{
        cout << "Yes\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}