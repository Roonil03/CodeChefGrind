#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        long long m;
        cin>>n>>m;
        vector<long long>a(n), b(n);
        for(int i{0};i<n;i++){
            cin>>a[i];
        }
        long long p {0};
        for(int i{0};i<n;i++){
            long long Ai = a[i];
            long long maxk = m / Ai;
            long long base = p / Ai;
            long long k = maxk;
            while(gcd(base, k) != 1) k--;
            b[i] = k * Ai;
            p = Ai;
        }
        for(int i{0};i<n;i++){
            cout<<b[i]<<(i+1<n?' ':'\n');
        }
    }
}
