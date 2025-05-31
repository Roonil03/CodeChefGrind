#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t{0};
    cin >> t;
    for (int i {0}; i < t; i++){
        int n {0};
        cin >> n;
        int a {0}, b{0};
        for(int j{0}; j < n; j++){
            int temp {0};
            cin >> temp;
            if(j % 2 == 0){
                a += temp;
            } else{
                b += temp;
            }
        }
        cout << (a > b ? a : b) << endl;
    }
}
