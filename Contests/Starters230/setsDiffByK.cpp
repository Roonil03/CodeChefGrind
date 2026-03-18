#include <bits/stdc++.h>

using namespace std;

#define sz(x) ((int)x.size())
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>

template<typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (T& x : v) is >> x;
    return is;
}

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        os << v[i];
        if (i + 1 < v.size()) os << " ";
    }
    return os;
}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>arr(n);
    cin >> arr;
    vi s;
    for(int i {0}; i < n; i++){
        if(arr[i] == 1){
            s.push_back(i + 1);
        }
    }
    for(int i {0}; i < sz(s); i++){
        for(int j = i + 1; j < sz(s); j++){
            if(abs(s[i] - s[j]) <= k){
                cout << "No" << endl;
                return;
            }
        }
    }
    for(int i {0}; i < n; i++){
        if(arr[i] == 0){
            int cur = i + 1;
            bool fg = false;
            for(int j : s){
                if(abs(cur - j) <= k){
                    fg = true;
                    break;
                }
            }
            if(!fg){
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
    // cout << arr;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}