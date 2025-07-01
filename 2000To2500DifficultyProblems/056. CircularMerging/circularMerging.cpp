#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int M = 805;

ll dp[M][M], o[M][M], s[M];
int a[M];

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        for(int i {1};i<=N;i++){
            cin>>a[i];
            a[i+N]=a[i];
        }
        int L=2*N;
        s[0] = 0;
        for(int i {1};i<=L;i++){
            s[i]=s[i-1]+a[i];
        }
        for(int i{1};i<=L;i++){
            dp[i][i] = 0;
            o[i][i]=i;
        }
        for(int len{2};len<=N;len++){
            for(int i=1;i+len-1<=L;i++){
                int j=i+len-1;
                int l=o[i][j-1], r=o[i+1][j];
                if(r<l){
                    r=l;
                }
                ll mv=LLONG_MAX;
                int mk=l;
                for(int k=l;k<=r;k++){
                    ll v=dp[i][k]+dp[k+1][j];
                    if(v<mv){
                        mv=v; mk=k;
                    }
                }
                dp[i][j]=mv + (s[j]-s[i-1]);
                o[i][j]=mk;
            }
        }
        ll res=LLONG_MAX;
        for(int i{1};i<=N;i++){
            res=min(res,dp[i][i+N-1]);
        }
        cout<<res<<"\n";
    }
}
