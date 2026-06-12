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
    int n;
    cin >> n;
    vector<int>arr(n);
    cin >> arr;
    sort(arr.begin(), arr.end());
    vector<ll> v(n);
    auto h1 = [&](int k) {
        if (k == 0){
            return true;
        }
        for(int i = 0; i < k; ++i) {
            v[i] = arr[i] - i;
        }
        sort(v.begin(), v.begin() + k, greater<ll>());
        ll sum = 0;
        for(int m = 1; m <= k; ++m) {
            sum += v[m - 1];
            ll rhs = 1LL * m * (n - k) - 1LL * m * (m - 1) / 2;
            if(sum > rhs){
                return false;
            }
        }
        return true;
    };
    int l = 0, r = n, res = 0;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(h1(mid)) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
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