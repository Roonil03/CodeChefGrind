#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        double c=0,d=0;
        for(int i=0;i<n;i++){
            int g,a,b;
            cin>>g>>a>>b;
            double x=double(g)*b/(a+b);
            double y=double(g)*a/(a+b);
            c+=x;
            d+=y;
        }
        cout<<fixed<<setprecision(6)<<c<<" "<<d<<"\n";
    }
    return 0;
}
