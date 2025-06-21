#include <bits/stdc++.h>
using namespace std;

const int V=1000005;
int sp[V],pr[V],pc;
bool bd[V];

int main() {
	// your code goes here
    for(int i=2;i<V;i++){
        if(!sp[i]){
            {sp[i]=i;pr[pc++]=i;}
        }
        for(int j=0;j<pc&&pr[j]<=sp[i]&&i*pr[j]<V;j++){
            sp[i*pr[j]]=pr[j];
        }
    }
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        bool eq=true;
        for(int i=1;i<n;i++){
            if(a[i]!=a[0]){
                eq=false;
                break;
            
            }
        }
        if(eq){
            cout<<0<<"\n";
            continue;
        }
        int g=a[0];
        for(int i=1;i<n;i++){
            g=gcd(g,a[i]);
        }
        if(g>1){
            cout<<1<<"\n"<<g<<"\n";
            continue;
        }
        vector<int> vp;
        for(int x:a){
            int y=x;
            while(y>1){
                int p=sp[y];
                if(!bd[p]){
                    bd[p]=1;vp.push_back(p);
                }
                while(y%p==0){
                    y/=p;
                }
            }
        }
        int fx=0;
        for(int i=0;i<pc&&pr[i]<=m;i++){
            if(!bd[pr[i]]){
                fx=pr[i];
                break;
            }
        }
        if(fx){
            cout<<1<<"\n"<<fx<<"\n";
        } else {
            cout<<2<<"\n2 3\n";
        }
        for(int p:vp){
            bd[p]=0;
        }
    }
}
