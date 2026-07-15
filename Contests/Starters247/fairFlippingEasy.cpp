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
    // vector<int>arr(n);
    // cin >> arr;
    string s;
    cin >> s;
    int a = count(s.begin(), s.end(), '0');
    int b = n - a;
    if(a < k || b < k){
        cout << s << endl;
    } else if(n == 2 * k){
        string rev = s;
        for(char& ch : s){
            ch ^= 1;
        }
        cout << min(s, rev) << endl;
    } else{
        cout << string(a, '0') << string(b, '1') << endl;
    }
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