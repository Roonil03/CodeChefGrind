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

int mod = 998244353;

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    cin >> a;
    vi b(n);
    cin >> b;
    vi r, s;
    for(int i {0}; i < n; i++){
        if(b[i] == 0){
            r.push_back(a[i]);
        } else{
            s.push_back(a[i]);
        }
    }
    int nr = sz(r), ns = sz(s);
    vi rr(ns + 1, 0), ss(nr + 1, 0);
    int rid {0};
    for(int i {0}; i < n; i++){
        if(b[i] == 0){
            rid++
            ;
            int bid {0};
            for(int j {0}; j < i; j++){
                if(b[j] == 1){
                    bid++;
                    if(r[rid - 1] < s[bid - 1]){
                        ss[rid] = max(ss[rid], bid);
                    }
                }
            }
        } else{
            int bid = sz(s) - count(b.begin() + i, b.end(), 1) + 1;
            int id {0};
            for(int j {0}; j < i; j++){
                if(b[j] == 0){
                    id++;
                    if(r[id - 1] < s[bid - 1]){
                        rr[bid] = max(rr[bid], id);
                    }
                }
            }
        }
    }
    vi dp(ns + 1, 0);
    dp[0] = 1;
    for(int i {0}; i <= nr; i++){
        for(int j {1}; j <= ns; j++){
            if(i >= rr[j]){
                dp[j] = (dp[j] + dp[j - 1]) % mod;
            }
        }
        if(i < nr){
            for(int j {0}; j <= ns; j++){
                if(j < ss[i + 1]){
                    dp[j] = 0;
                }
            }
        }
    }
    cout << dp[ns] << endl;
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