#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        bool pos = true;
        // for(int i {0}; i < n; i++){
        //     if(s[i] == '1'){
        //         bool a = (i == 0) || (s[i-1] == '0');
        //         bool b = (i == n - 1) || (s[i+1] == '0');
        //         if(a && b){
        //             if(i < 1 || i > n - 2){
        //                 pos = false;
        //                 break;
        //             }
        //         }
        //     }
        // }
        // if(pos && s[0] == '1'){
        //     if((n >= 2 && s[1] == '0') || (n >= 3 && s[2] == '0')){
        //         pos = false;
        //     }
        // }
        // if(pos && s[n-1] == '1'){
        //     if((n >= 2 && s[n - 2] == '0') || (n >= 3 && s[n - 3] == '0')){
        //         pos = false;
        //     }
        // }
        // cout << (pos ? "Yes":"No") << endl;
        
        int i {0};
        while(i < n && pos){
            if(s[i] == '1'){
                int st = i;
                while(i < n && s[i] == '1'){
                    i++;
                }
                int l = i - st;
                // if(l == 1){
                //     if(st < 1 || st > n - 2){
                //         pos = false;
                //     }
                // } else if(l == 2){
                //     pos = false;
                // }
                if(l == 1 || l == 2){
                    pos = false;
                }
            } else{
                i++;
            }
        }
        cout << (pos ? "Yes":"No") << endl;
    }
}
