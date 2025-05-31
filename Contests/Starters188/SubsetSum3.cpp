#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t{0};
    cin >> t;
    while(t--){
        int n {0};
        cin >> n;
        int rem[3] = {0, 0, 0};
        for(int i {0}; i < n; i++){
            int x{0};
            cin >> x;
            rem[x%3]++;
        }
        if(rem[0] > 0 || (rem[1] > 0 && rem[2] > 0) || rem[1] >= 3 || rem[2] >= 3){
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
    }
}