#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T{0};
    cin>>T;
    while(T--){
        int N{0};
        cin>>N;
        string S;
        cin>>S;
        int no{(N+1)/2};
        int ne{N/2};
        int c1o{0};
        int c1e{0};
        for(int i{0}; i<N; ++i){
            if(S[i]=='1'){
                if(i%2==0) ++c1o;
                else ++c1e;
            }
        }
        int c0o = no - c1o;
        int c0e = ne - c1e;
        bool can0 = (c1o == c1e);
        bool can1 = (c0o == c0e);
        if(can0 || can1) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
