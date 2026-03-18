#include <bits/stdc++.h>

using namespace std;

#define sz(x) ((int)x.size())
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>

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
    int n;
    cin >> n;
    vector<int>arr(n);
    cin >> arr;
    vi s;
    vector<bool> ps(n + 1, false);
    vi id;
    for(int i = 0; i < n; i++){
        if(arr[i] != -1){
            ps[arr[i]] = true;
        } else{
            id.push_back(i);
        }
    }
    for(int i = 1; i <= n; i++){
        if(!ps[i]){
            s.push_back(i);
        }
    }
    if(id.empty()){
        cout << 1 << endl;
        return;
    }
    int k = id.size();
    vi a(k, 0);
    int cur = 0;
    int pd = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == -1){
            a[pd] = cur;
            pd++;
            cur = 0;
        } else{
            cur = max(cur, arr[i]);
        }
    }
    ll mod = 998244353;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for(int i = 0; i < k; i++){
        vector<ll> temp(n + 1, 0);
        vector<ll> p(n + 1, 0);
        p[0] = dp[0];
        for(int i = 1; i <= n; i++){
            p[i] = (p[i-1] + dp[i]) % mod;
        }
        int val = a[i];
        int si = s[i];
        for(int i = 0; i <= n; i++){
            if(dp[i] == 0){
                continue;
            }
            int c = max(i, val);
            if(c >= si){
                temp[c] = (temp[c] + dp[i]) % mod;
            }
        }
        for(int i : s){
            if(i >= si && i > val){
                temp[i] = (temp[i] + p[i - 1]) % mod;
            }
        }
        dp = temp;
    }
    ll res = 0;
    for(int i = 0; i <= n; i++){
        res = (res + dp[i]) % mod;
    }    
    cout << res << endl;
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