#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,q; 
        cin>>n>>q;
        string a,b; 
        cin>>a>>b;
        vector<int>d(n),g(n);
        for(int i{0};i<n;i++){
            d[i]=(b[i]-a[i]+26)%26;
            int v=(i%2==0?d[i]:(26-d[i]))%26;
            g[i]=(i?g[i-1]:0)+v;
            g[i]%=26;
        }
        while(q--){
            int l,r; 
            cin>>l>>r;
            l--; r--;
            if(l==r){
                cout<<(d[l]==0?"Yes\n":"No\n");
            } else {
                int val = (g[r] - (l?g[l-1]:0) + 26) % 26;
                if(l%2){
                    val = (26 - val) % 26;
                }
                cout<<(val==0?"Yes\n":"No\n");
            }
        }
    }
}
