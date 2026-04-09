#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize ("O3")
// #pragma GCC target("avx2, bmi, bmi2, popcnt")

#define sz(x) ((int)x.size())
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<long long>

template<typename T>
istream& operator>>(istream& is, vector<T>& v){
    for (T& x : v) is >> x;
    return is;
}

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
    for (int i = 0; i < v.size(); i++){
        os << v[i];
        if (i + 1 < v.size()) os << " ";
    }
    return os;
}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<ll>arr(n);
    cin >> arr;
    sort(arr.begin(), arr.end());
    int m = n - k;
    int mid = (m -1) / 2;
    bool fg = true;
    for(int i = mid; i <= mid + k; i++){
        if(i == mid || arr[i] != arr[i-1]){
            if(!fg){
                cout << " ";
            }
            cout << arr[i];
            fg = false;
        }
    }
    cout << endl;
    // cout << arr;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(nullptr);
    cin.exceptions(cin.failbit);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}