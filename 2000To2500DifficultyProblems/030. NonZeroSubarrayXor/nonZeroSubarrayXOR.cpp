#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
    //     if(n <= 20){
    //         int p = 1;
    //         for(int i = 0; i < n; i++){
    //             if(i > 0){
    //                 cout << " ";
    //             }
    //             cout << p;
    //             p <<= 1;
    //         }
    //     } else {
    //         for(int i = 0; i < 19; i++){
    //             if(i > 0){
    //                 cout << " ";
    //             }
    //             cout << (1 << i);
    //         }
    //         int st = 700000;
    //         int step = 1000;
    //         for(int i = 19; i < n; i++){
    //             cout << " " << (st + (i - 19) * step);
    //         }
    //     }
    //     cout << "\n";
    int t;
    cin >> t;
    while(t--){
        // int n;
        // cin >> n;
        // for(int i = 0; i < n; i++){
        //     if(i > 0){
        //         cout << " ";
        //     }
        //     cout << (i * 17 + 1);
        // }
        // cout << "\n";
        int n;
        cin >> n;
        int arr[n];
        arr[0] = 1;
        for(int i = 1; i < n; i++) {
            int a = i + 1;
            int b = (a ^ i);
            arr[i] = b;
        }
        for(int i = 0; i < n; i++) {
            if(i > 0) {
                cout << " ";
            }
            cout << arr[i];
        }
        cout << "\n"; 
    }
}
