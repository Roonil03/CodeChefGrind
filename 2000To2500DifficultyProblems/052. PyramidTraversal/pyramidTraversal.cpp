#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int M = 1e9+7;
const int N = 50000;
ll f[N+1], g[N+1];

ll pw(ll a, ll b){
    ll r=1;
    while(b){
        if(b&1) r=r*a%M;
        a=a*a%M;
        b>>=1;
    }
    return r;
}

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    f[0]=1;
    for(int i=1;i<=N;i++){
        f[i]=f[i-1]*i%M;
    }
    g[N]=pw(f[N],M-2);
    for(int i=N;i>0;i--){
        g[i-1]=g[i]*i%M;
    }
    int T;
    cin>>T;
    while(T--){
        ll s,e;
        cin>>s>>e;
        auto gt=[&](ll x){
            ll l=1,r=N;
            while(l<r){
                ll m=(l+r)/2;
                if(m*(m+1)/2>=x){
                    r=m;
                } else{
                    l=m+1;
                }
            }
            ll p=(l-1)*l/2;
            return pair<ll,ll>(l, x-p);
        };
        auto a=gt(s), b=gt(e);
        ll dr=b.first-a.first, dc=b.second-a.second;
        if(dr<0||dc<0||dc>dr){
            cout<<0<<"\n";
        } else{
            cout<<f[dr]*g[dc]%M*g[dr-dc]%M<<"\n";
        }
    }
}
