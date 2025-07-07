#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using u128 = __uint128_t;

static inline ull rc(u128 z){
    ull c=cbrt((long double)z);
    while((u128)(c+1)*(c+1)*(c+1)<=z){
        ++c;
    }
    while((u128)c*c*c>z){
        --c;
    }
    return c;
}


int main() {
	// your code goes here
    int t; 
    cin>>t;
    while(t--){
        // ull x; 
        // cin >> x;
        // ull l = 0, r = 1'000'000;
        // while (l < r) {
        //     ull m = (l + r) >> 1;
        //     ull a = m + x;
        //     ull b = m + 1;
        //     u128 lhs = (u128)a * a;
        //     u128 rhs = (u128)b * b * b;
        //     if (lhs < rhs){
        //         r = m;
        //     } else {
        //         l = m + 1;
        //     }
        // }
        // ull c = l, s = c + x;
        // cout << s * s << '\n';
        // ull X; cin >> X;
        // ull lo = 0, hi = X + (ull)ceil(pow((long double)X,1.5L)) + 2;
        // while(lo < hi){
        //     ull mid = (lo + hi) >> 1;
        //     ull c = icbrt((u128)mid*mid);
        //     if (mid - c >= X){
        //         hi = mid;
        //     }
        //     else {
        //         lo = mid + 1;
        //     }
        // u128 res=(u128)l*l;
        // cout<<(ull)res<<'\n';
        ull x;cin>>x;
        ull l=0,r=x+(ull)ceil(powl((long double)x,1.5L))+3;
        while(l<r){
            ull m=(l+r)>>1;
            ull c=rc((u128)m*m);
            if(m-c>=x){
                r=m;
            }else{
                l=m+1;
            }
        }
        u128 a=(u128)l*l;
        cout<<(ull)a<<"\n";
    }
}
