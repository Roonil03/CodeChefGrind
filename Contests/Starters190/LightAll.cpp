#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> a(n, false);
        for(int i{0}; i < n; i++){
            if(s[i] == '1'){
                a[i] = true;
            }
        }
        for(int i{0}; i < n; i++){
            if(s[i] == '1'){
                if (i > 0 && !a[i - 1]){
                    a[i-1] = true;
                } else if(i < n-1 && !a[i+1]){
                    a[i+1] = true;
                }
            }
        }
        bool b = true;
        for(int i{0}; i < n; i++){
            if(!a[i]){
                b = false;
                break;
            }
        }
        if (b){
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
    }
}
