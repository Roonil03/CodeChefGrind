#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i {0}; i < n; i++){
        cin >> a[i];
    }
    vector<int>b(n);
    for(int i {0}; i < n; i++){
        cin >> b[i];
    }
    int tot{0}, loss{INT_MAX};
    for(int i {0}; i < n; i++){
        tot += a[i];
        loss = min(loss, a[i]-b[i]);
    }
    cout << (tot - loss) << endl;
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