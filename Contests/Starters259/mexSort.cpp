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
    
    vi pos(n);
    bool fg = true;
    for(int i {0}; i < n; i++){
        pos[arr[i]] = i;
        if(arr[i] != i){
            fg = false;
        }
    }
    
    if(fg){
        cout << 0 << "\n";
        return;
    }
    
    int mpn = pos[0], mpx = pos[0];
    vi t;
    for(int i {1} ; i < n; i++){
        if(mpn < pos[i] && pos[i] < mpx){
            t.push_back(i);
        }
        mpn = min(mpn, pos[i]);
        mpx = max(mpx, pos[i]);
    }
    
    if(t.empty()){
        cout << -1 << "\n";
        return;
    }
    
    int b = -1;
    for(int v : t){
        if(pos[v] == v){
            b = v;
            break;
        }
    }
    
    if(b != -1){
        cout << 1 << "\n" << n - 1 << "\n";
        vi q;
        for(int i {0}; i < n; i++){
            if(i != b){
                q.push_back(i);
            }
        }
        cout << q << "\n" << q << "\n";
        return;
    }
    
    int m = t[0], mps = pos[m];
    vi q;
    for(int i {0}; i < n; i++){
        if(i != mps){
            q.push_back(i);
        }
    }
    
    int w = -1;
    for(int i {2}; i <= n - 2; i++){
        if(i != m && i != mps && i > q[0] && i < q.back()){
            w = i;
            break;
        }
    }
    
    vi ass(n, -1);
    ass[q[0]] = 0;
    ass[q.back()] = 1;
    ass[w] = w;
    
    vi vis(n, 0);
    vis[0] = vis[1] = vis[w] = vis[m] = 1;
    
    vi rem;
    for(int i {0}; i < n; i++){
        if(!vis[i]){
            rem.push_back(i);
        }
    }
    
    int ptr {0};
    vi ops(n - 1);
    for(int i {0}; i < n - 1; i++){
        if(ass[q[i]] == -1){
            ass[q[i]] = rem[ptr++];
        }
        ops[i] = ass[q[i]];
    }
    
    cout << 2 << "\n" << n - 1 << "\n";
    cout << q << "\n" << ops << "\n";
    
    cout << n - 1 << "\n";
    vi qq;
    for(int i {0}; i < n; i++){
        if(i != w){
            qq.push_back(i);
        }
    }
    cout << qq << "\n" << qq << endl;
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