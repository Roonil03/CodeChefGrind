#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n == 100){
            cout << 100 << endl;
        } else if(n >= 81){
            cout << "81" << endl;
        } else if(n >= 64){
            cout<< "64" << endl;
        } else if(n >= 49){
            cout<< "49" << endl;
        } else if(n >= 36){
            cout<< "36" << endl;
        } else if(n >= 25){
            cout<< "25" << endl;
        } else if(n >= 16){
            cout<< "16" << endl;
        } else if(n >= 9){
            cout<< "9" << endl;
        } else if(n >= 4){
            cout<< "4" << endl;
        } else {
            cout<< "1" << endl;
        }
    }
}
