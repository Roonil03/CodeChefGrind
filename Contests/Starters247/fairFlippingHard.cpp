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
    string s;
    cin >> s;
    int c0 = count(s.begin(), s.end(), '0');
    int c1 = n - c0;
    if(c0 < k || c1 < k){
        cout << s << "\n0\n";
    } else if(n == 2 * k){
        string rev = s;
        for(char &ch : rev){
            ch ^= 1;
        }
        if (s <= rev) {
            cout << s << "\n0" << endl;
        } else {
            cout << rev << "\n1" << endl;
        }
    } else {
        string opt = string(c0, '0') + string(c1, '1');
        int m {0};
        for(int i {0}; i < c0; i++){
            if(s[i] == '1'){
                m++;
            }
        }
        int mm = min(c0, c1);
        vector<int> dist(mm + 1, -1);
        vector<int> par(mm + 2);
        iota(par.begin(), par.end(), 0);
        auto find = [&](auto& self, int i) -> int {
            return par[i] == i ? i : par[i] = self(self, par[i]);
        };
        dist[m] = 0;
        par[m] = m + 1;
        queue<int> q;
        q.push(m);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            if (u == 0){
                break;
            }
            int l = max(0, abs(u - k));
            int r = min(mm, u + k - max(0, u - c1 + k) - max(0, u - c0 + k));
            if (l > r){
                continue;
            }
            for (int v = find(find, l); v <= r; v = find(find, v)) {
                dist[v] = dist[u] + 1;
                par[v] = v + 1;
                q.push(v);
            }
        }
        cout << opt << "\n" << dist[0] << endl;
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