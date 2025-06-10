#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t{0};
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i{0}; i < n; i++){
            cin >> arr[i];
        }
        if (n < 2){
            cout << "-1" <<endl;
            continue;
        }
        for(int i{1}; i < n; i++){
            if(arr[i] != arr[i-1]){
                cout << "2" << endl;
                goto l1;
            }
        }
        cout << "-1" <<endl;
        l1: ;
    }
}
