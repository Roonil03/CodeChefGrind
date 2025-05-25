// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
// 	// your code goes here
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int p=k-n;
//         int x=0;
//         if(p>0){
//             while(x*(x-1)/2<=p)x++;
//             x--;
//         }
//         vector<int>a(n);
//         for(int i=0;i<x;i++)a[i]=i+1;
//         int e=p-x*(x-1)/2;
//         if(x<n){
//             a[x]=x-e+1;
//             for(int i=x+1;i<n;i++)a[i]=1;
//         }
//         for(int i=0;i<n;i++){
//             cout<<a[i];
//             if(i<n-1)cout<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, k; cin >> n >> k;
	    k -= n;
	    cout << "1 ";
	    int last = 1;
	    for(int i = 1; i < n; i++) {
	        if(!k) cout << last << " ";
	        else if(k >= last) k -= last, last++, cout << last << " ";
	        else cout << last - k << " ", last -= k, k = 0;
	    }
	    cout << "\n";
	}
	return 0;
}