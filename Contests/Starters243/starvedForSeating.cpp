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

void precomp(){

}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>arr(n);
    cin >> arr;
    int sum {0};
    for(int i {0}; i < n; i++){
        sum += arr[i];
    }
    // int m = sum / 2;
    sort(arr.begin(), arr.end());
    int res {0};
    for(int i {0}; i < n; i++){
        int tar = 2 * k - sum - arr[i];
        auto it = upper_bound(arr.begin() + i + 1, arr.end(), tar);
        int temp = arr.end() - it;
        res += temp;
    }
    cout << res << endl;
    // cout << arr;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(nullptr);
    cin.exceptions(cin.failbit);
    int t;
    cin >> t;    
    precomp();
    while(t--){
        solve();
    }
    return 0;
}