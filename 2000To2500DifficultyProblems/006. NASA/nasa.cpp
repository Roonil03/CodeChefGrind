#include <bits/stdc++.h>
using namespace std;

static long long c[1<<15];
static __int128 a[1<<15];
vector<int> p;

void abefhis(__int128* f, bool inv){
    int N = 1<<15;
    for(int len=1; len<N; len<<=1)
        for(int i=0; i<N; i+=len<<1)
            for(int j=0; j<len; ++j){
                __int128 u = f[i+j], v = f[i+j+len];
                f[i+j]   = u+v;
                f[i+j+len]= u-v;
            }
    if(inv)
        for(int i=0; i<N; ++i)
            f[i] /= N;
}

int main() {
	// your code goes here
    p.push_back(0);
    for(int d=1; d<=9; ++d){
        p.push_back(d);
    }
    for(int d=1; d<=9; ++d){
        p.push_back(d*10 + d);
    }
    for(int i=1; i<=9; ++i){
        for(int j=0; j<=9; ++j){
            p.push_back(i*100 + j*10 + i);
        }
    }
    for(int i=1; i<=9; ++i) for(int j=0; j<=9; ++j){
        p.push_back(i*1000 + j*100 + j*10 + i);
    }
    for(int i=1; i<=9; ++i) for(int j=0; j<=9; ++j) for(int k=0; k<=9; ++k){
        int v = i*10000 + j*1000 + k*100 + j*10 + i;
        if(v< (1<<15)){
            p.push_back(v);
        }
    }
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        memset(c,0,sizeof c);
        for(int i=0,x;i<N;++i){
            cin>>x;
            c[x]++;
        }
        int M = 1<<15;
        for(int i=0;i<M;++i){
            a[i] = c[i];
        }
        abefhis(a,false);
        for(int i=0;i<M;++i){
            a[i] = a[i]*a[i];
        }
        abefhis(a,true);
        __int128 ans = 0;
        for(int v: p){
            if(v==0){
                ans += (a[0] + N)/2;
            } else{
                ans += a[v]/2;
            }
        }
        cout << (long long)ans << "\n";
    }
    return 0;
}
