#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

ll modexp(ll b, ll e) {
    ll r{1};
    while(e) {
        if(e&1) r = r*b % MOD;
        b = b*b % MOD;
        e >>= 1;
    }
    return r;
}

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T{0};
    cin>>T;
    int maxN{100000};
    vector<ll> p2(maxN+1);
    p2[0]=1;
    for(int i{1};i<=maxN;++i) p2[i]=(p2[i-1]*2)%MOD;
    while(T--){
        int n{0}, k{0};
        cin>>n>>k;
        vector<int> f(k,0);
        for(int i{0};i<n;++i){
            int x{0};
            cin>>x;
            f[x%k]++;
        }
        ll ans{1};
        ans = ans * (1 + f[0]) % MOD;
        for(int r{1}; r*2<k; ++r){
            int s = k - r;
            ll c1 = p2[f[r]];
            ll c2 = p2[f[s]];
            ll ways = (c1 + c2 - 1 + MOD) % MOD;
            ans = ans * ways % MOD;
        }
        if(k%2==0){
            int r = k/2;
            ans = ans * (1 + f[r]) % MOD;
        }
        cout<<ans<<"\n";
    }
}
