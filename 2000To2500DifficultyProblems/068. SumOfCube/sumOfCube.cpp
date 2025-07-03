#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll M = 998244353;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll s=0, S1=0, S2=0, S3=0, ans=0;
        for(int i=1;i<=n;i++){
            ll a;
            cin>>a;
            s=(s+a)%M;
            ll s2=s*s%M;
            ll s3=s2*s%M;
            ll t1=i*s3%M;
            ll t2=3*s2%M*S1%M;
            ll t3=3*s%M*S2%M;
            ll cur=(t1 - t2 + t3 - S3) % M;
            ans=(ans + cur + 2LL*M) % M;
            S1=(S1 + s) % M;
            S2=(S2 + s2) % M;
            S3=(S3 + s3) % M;
        }
        cout<<ans<<"\n";
    }    
}
