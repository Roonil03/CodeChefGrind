#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
using ll = long long;

struct DSU {
    vector<int> p, r, sz;
    DSU(int n): p(n+1), r(n+1,0), sz(n+1,1) {
        iota(p.begin(), p.end(), 0);
    }
    int find(int x){
        return p[x]==x? x: p[x]=find(p[x]);
    }
    void unite(int a,int b){
        a=find(a);
        b=find(b);
        if(a==b){
            return;
        }
        if(r[a]<r[b]){
            swap(a,b);
        }
        p[b]=a;
        sz[a]+=sz[b];
        if(r[a]==r[b]){
            r[a]++;
        }
    }
    int size(int x){
        return sz[find(x)];
        
    }
};

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T; 
    cin>>T;
    int Nsum {200000};
    vector<ll> fact(Nsum+1,1), invf(Nsum+1,1);
    for(int i {1};i<=Nsum;i++){
        fact[i]=fact[i-1]*i%MOD;
    }
    invf[Nsum]=[](ll x){
        ll r {1}, p=MOD-2;
        while(p){
            if(p&1) r=r*x%MOD;
            x=x*x%MOD; p>>=1;
        }
        return r;
    }(fact[Nsum]);
    for(int i=Nsum;i>0;i--){
        invf[i-1]=invf[i]*i%MOD;
    }
    while(T--){
        int N,M;
        cin>>N>>M;
        DSU d(N);
        for(int i {0},u,v;i<M;i++){
            cin>>u>>v;
            d.unite(u,v);
        }
        vector<int> A(N+1);
        for(int i {1};i<=N;i++){
            cin>>A[i];
        }
        unordered_map<int, vector<int>> comp;
        comp.reserve(N);
        for(int i {1};i<=N;i++){
            comp[d.find(i)].push_back(i);
        }
        ll res = fact[N];
        for(auto &pr : comp){
            auto &v = pr.second;
            int sz = v.size();
            res = res * invf[sz] % MOD;
            if(sz>1){
                unordered_map<int,int> cnt;
                cnt.reserve(sz);
                for(int i: v){
                    cnt[A[i]]++;
                }
                for(auto &q: cnt){
                    res = res * fact[q.second] % MOD;
                }
            }
        }
        cout<<res<<"\n";
    }
}
