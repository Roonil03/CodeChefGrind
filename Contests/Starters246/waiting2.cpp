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
    vector<ll>arr(n);
    cin >> arr;
    ll tot {0}, a1 {0}, a2 {0}, cur {0};
    int m1 {0}, m2 {0};
    for(int i {0}; i < n; i++){
        int v = arr[i];
        if(v > m1){
            a2 = max(a2, cur);
            cur = 0;
            m2 = m1;
            m1 = v;
        } else{
            if(v > m2){
                m2 = v;
            }
            cur += (m1 - m2);
        }
        ll tt = m1 - v;
        tot += tt;
        if(tt > a1){
            a1 = tt;
        }
    }
    a2 = max(a2, cur);
    cout << (tot - max(a1, a2)) << endl;
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