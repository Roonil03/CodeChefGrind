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
    // vector<int>arr(n);
    // cin >> arr;
    vector<pii> edging(n - 1);
    vi deg(n + 1, 0);
    for(int i {0}; i < n - 1; i++){
        cin >> edging[i].first >> edging[i].second;
        deg[edging[i].first]++;
        deg[edging[i].second]++;
    }
    vi tt(n + 1, 0);
    for(int i {0}; i < n - 1; i++){
        if(deg[edging[i].first] == 1){
            tt[edging[i].second]++;
        }
        if(deg[edging[i].second] == 1){
            tt[edging[i].first]++;
        }
    }
    ll kk {0}, c1 {0}, c2 {0};
    for(int i {1}; i <= n; i++){
        if(deg[i] == 1){
            kk++;
        }
        if(tt[i] > 1){
            c1 += (ll)tt[i] * (tt[i] - 1) / 2;
        }
        if(deg[i] == 2 && tt[i] == 0){
            c2++;
        }
    }
    ll c3 = kk * (n - 2) - c1;
    ll temp = (ll)n * (n - 1) * (n - 2) / 6;
    ll res = temp - c3 - c2 ;
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