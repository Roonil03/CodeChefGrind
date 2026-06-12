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
    int r = k / n;
    int m = k % n;
    int res {0};
    if(!(r&1)){
        int a = r * k + r / 2 - n * r * r / 2;
        int b = (m > 0) ? m : 0;
        res = a + b;
    } else{
        int a = r * k + (r + 1) / 2 - n * (r * r - 1) / 2;
        int b = a - 1;
        int c = a + m - n;
        res = b;
        if(m > 0 && c > res){
            res = c;
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