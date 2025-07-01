#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int m = 1 << N;
        vector<ll> v(m);
        for(int i {0}; i < m; ++i){
            cin >> v[i];
        }
        map<ll,int> M;
        for(ll x : v) M[x]++;
        vector<ll> u = {0}, d, res;
        for(int i {0}; i < N; ++i){
            auto it = M.begin();
            if(it->first == 0) ++it;
            ll x = it->first;
            res.push_back(x);
            d.clear();
            for(ll y : u){
                d.push_back(y + x);
            }
            for(ll s : d){
                if(--M[s] == 0) M.erase(s);
            }
            for(ll s : d){
                u.push_back(s);
            }
        }
        sort(res.begin(), res.end());
        for(int i {0}; i < N; ++i){
            cout << res[i] << (i + 1 < N ? ' ' : '\n');
        }
    }
}
