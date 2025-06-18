#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct HK {
    int n, m;
    vector<vector<int>> adj;
    vector<int> d, pu, pv;
    const int INF = 1e9;
    HK(int n, int m): n(n), m(m),
        adj(n+1), d(n+1), pu(n+1), pv(m+1) {}
    void addEdge(int u, int v){
        adj[u].push_back(v);
    }
    bool bfs(){
        queue<int>q;
        for(int u=1;u<=n;u++){
            if(pu[u]==0){
                d[u]=0, q.push(u);
            }
            else{
                d[u]=INF;
            }
        }
        bool az=false;
        while(!q.empty()){
            int u=q.front(); q.pop();
            for(int v:adj[u]){
                if(pv[v]==0){
                    az=true;
                }
                else if(d[pv[v]]==INF){
                    d[pv[v]] = d[u]+1;
                    q.push(pv[v]);
                }
            }
        }
        return az;
    }
    bool dfs(int u){
        for(int v:adj[u]){
            if(pv[v]==0 || (d[pv[v]]==d[u]+1 && dfs(pv[v]))){
                pu[u]=v; pv[v]=u;
                return true;
            }
        }
        d[u]=INF;
        return false;
    }
    int h1(){
        int res{0};
        while(bfs()){
            for(int u=1;u<=n;u++)
                if(pu[u]==0 && dfs(u)) res++;
        }
        return res;
    }
};

int main(){
    // your code goes here
    int T; 
    cin>>T;
    while(T--){
        int N; cin>>N;
        vector<int>A(2*N+1), zx(N+1,0), lm(N+1,0);
        for(int i{1};i<=2*N;i++){
            cin>>A[i];
        }
        int P=0;
        for(int i{1};i<=N;i++){
            int u=A[2*i-1], v=A[2*i];
            if(u==v && !zx[u]){
                zx[u]=1;
                lm[i]=1;
                P++;
            }
        }
        HK hk(N, N);
        for(int i{1};i<=N;i++){
            if(lm[i]){
                continue;
            }
            int u=A[2*i-1], v=A[2*i];
            if(!zx[u]){
                hk.addEdge(i, u);
            }
            if(v!=u && !zx[v]){
                hk.addEdge(i, v);
            }
        }
        int M = hk.h1();
        ll res = 2LL*N - (2LL*P + M);
        cout<<res<<"\n";
    }
}