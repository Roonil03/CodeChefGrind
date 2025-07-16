#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T{0};
    cin>>T;
    while(T--){
        int N{0}, M{0}, S{0}, K{0};
        cin>>N>>M>>S>>K;
        vector<vector<int>> g(N+1);
        for(int i{0}; i<M; ++i){
            int u{0}, v{0};
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<int> A(S);
        for(int i{0}; i<S; ++i) cin>>A[i];
        vector<ll> d(N+1, -1);
        queue<int> q;
        d[0]=0;
        q.push(0);
        while(!q.empty()){
            int u=q.front(); q.pop();
            for(int v:g[u]){
                if(d[v]==-1){
                    d[v]=d[u]+1;
                    q.push(v);
                }
            }
        }
        vector<ll> dist;
        dist.reserve(S);
        for(int x:A) dist.push_back(d[x]);
        nth_element(dist.begin(), dist.begin()+K, dist.end());
        ll ans{0};
        for(int i{0}; i<K; ++i) ans += 2*dist[i];
        cout<<ans<<"\n";
    }
}
