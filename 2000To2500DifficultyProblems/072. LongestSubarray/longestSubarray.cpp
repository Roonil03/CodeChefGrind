#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<int>a(n);
        for(int i {0};i<n;i++){
            cin>>a[i];
        }
        int R=0;
        for(int x:a){
            R|=x;
        }
        const int B {30};
        vector<int>tot(B,0);
        for(int x:a){
            for(int b {0};b<B;b++){
                if(x>>b&1){
                    tot[b]++;
                }
            }
        }
        vector<int>need;
        for(int b {0};b<B;b++){
            if(R>>b&1){
                need.push_back(b);
            }
        }
        if(need.empty()){
            cout<<n<<"\n";
            continue;
        }
        vector<int>cnt(B,0);
        int L{0},ans{-1};
        for(int Rp {0};Rp<n;Rp++){
            int x=a[Rp];
            for(int b:need){
                cnt[b]+= (x>>b)&1;
            }
            while(L<=Rp){
                bool over=false;
                for(int b:need)[
                    if(cnt[b]>tot[b]-1){
                        over=true;
                        break;
                    }
                }
                if(!over){
                    break;
                }
                int y=a[L++];
                for(int b:need){
                    cnt[b]-=( (y>>b)&1 );
                }
            }
            bool ok=true;
            for(int b:need)
                if(cnt[b]<1){
                    ok=false;
                    break;
                }
            if(ok){
                ans=max(ans, Rp-L+1);
            }
        cout<<ans<<"\n";
    }
}
