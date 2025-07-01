#include <bits/stdc++.h>
using namespace std;

const int MAXA = 100000;
int spf[MAXA+1];

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i {2};i<=MAXA;i++){
        if(spf[i]==0){
            for(int j=i;j<=MAXA;j+=i){
                if(spf[j]==0){
                    spf[j]=i;
                }
            }
        }
    }
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int>a(N+1);
        for(int i {1};i<=N;i++){
            cin>>a[i];
        }
        unordered_map<int,int> first, last;
        first.reserve(N*2);
        last.reserve(N*2);
        for(int i {1};i<=N;i++){
            int x = a[i];
            while(x>1){
                int p = spf[x];
                while(x%p==0){
                    x/=p;
                }
                if(!first.count(p)){
                    first[p]=i;
                }
                last[p]=i;
            }
        }
        vector<int> diff(N+2,0);
        for(auto &kv: first){
            int p = kv.first;
            int fi = kv.second;
            int la = last[p];
            if(fi<la){
                diff[fi]++;
                diff[la]--;
            }
        }
        int cur {0}, res=1;
        for(int l=1;l< N;l++){
            cur += diff[l];
            if(cur==0){
                res = l;
                break;
            }
        }
        cout<<res<<"\n";
    }
}
