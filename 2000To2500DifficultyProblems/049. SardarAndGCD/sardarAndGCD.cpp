#include <bits/stdc++.h>
using namespace std;

int g(int a,int b){
    return b?g(b,a%b):a;
}

int n;
vector<vector<int>> gph;
vector<int> A,d,u,pr;

void f1(int x,int p){
    pr[x]=p;
    d[x]=A[x];
    for(int y:gph[x]) if(y!=p){
        f1(y,x);
        d[x]=g(d[x],d[y]);
    }
}

void f2(int x,int p){
    vector<int> c;
    for(int y:gph[x]) if(y!=p) c.push_back(y);
    int m=c.size();
    vector<int> pre(m+2), suf(m+2);
    pre[0]=0;
    for(int i=1;i<=m;i++){
        pre[i]=g(pre[i-1], d[c[i-1]]);
    }
    suf[m+1]=0;
    for(int i=m;i>=1;i--){
        suf[i]=g(suf[i+1], d[c[i-1]]);
    }
    for(int i=1;i<=m;i++){
        int y=c[i-1];
        u[y]=g(A[x], g(u[x], g(pre[i-1], suf[i+1])));
        f2(y,x);
    }
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        gph.assign(n+1,{});
        A.assign(n+1,0);
        d.assign(n+1,0);
        u.assign(n+1,0);
        pr.assign(n+1,0);
        for(int i=1;i<n;i++){
            int x,y;
            cin>>x>>y;
            gph[x].push_back(y);
            gph[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            cin>>A[i];
        }
        f1(1,0);
        u[1]=0;
        f2(1,0);
        long long res=0;
        for(int x=1;x<=n;x++){
            long long s=0;
            for(int y:gph[x]){
                if(y==pr[x]){
                    s+=u[x];
                } else{
                    s+=d[y];
                }
            }
            res=max(res,s);
        }
        cout<<res<<"\n";
    }
}
