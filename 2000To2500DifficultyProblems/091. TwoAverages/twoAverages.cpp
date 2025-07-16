#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T; 
    cin >> T;
    while(T--){
        ll n{0}, m{0}, K{0};
        cin >> n >> m >> K;
        vector<ll>A(n), B(m);
        ll sa{0}, sb{0};
        for(ll &x:A){
            cin>>x;
            sa+=x;
        }
        for(ll &x:B){
            cin>>x;
            sb+=x;
        }
        auto meanA = [&](){
            return (long double)sa / n;
        };
        auto meanB = [&](){
            return (long double)sb / m;
        };
        if(meanA() > meanB()){
            cout << 0 << "\n";
            continue;
        }
        ll ops{0};
        bool ok=false;
        while(ops <= 2e6){
            long double dA = (long double)(sa + K) / (n + 1) - (long double)sa / n;
            long double dB = (long double)sb / m - (long double)(sb + 1) / (m + 1);
            if(dA <= 0 && dB <= 0){
                break;
            }
            if(dA > dB){
                sa += K;
                n++;
            } else {
                sb += 1;
                m++;
            }
            ops++;
            if(meanA() > meanB()){
                ok=true;
                cout << ops << "\n";
                break;
            }
        }
        if(!ok){
            cout << -1 << "\n";
        }
    }
}
