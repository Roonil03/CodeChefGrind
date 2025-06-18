#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        vector<int> p1, p2;
        vector<int> p,qv;
        for(int i{0};i<n;i++){
            if(a[i]=='1'){
                p.push_back(i+1);
            }
            if(b[i]=='1'){
                qv.push_back(i+1);
            }
        }
        int x=p.size(), y=qv.size();
        vector<ll> s(x+1), r(y+1);
        for(int i{1};i<=x;i++){
            s[i]=s[i-1]+p[i-1];
        }vector<int> u;
        for(int i=y-1;i>=0;i--){
            u.push_back(n+1-qv[i]);
        }
        for(int i{1};i<=y;i++){
            r[i]=r[i-1]+u[i-1];
        }
        ll res=LLONG_MAX;
        for(int j{1};j<=n;j++){
            int k=n-j+1;
            if(j>x||k>y){
                continue;
            }
            ll c1=s[j]-1LL*j*(j+1)/2;
            ll c2=r[k]-1LL*k*(k+1)/2;
            res=min(res,c1+c2);
        }
        cout<<(res==LLONG_MAX?-1:res)<<"\n";
    }
}
