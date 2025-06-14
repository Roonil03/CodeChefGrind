#include <bits/stdc++.h>
using namespace std;

int h1(int x){
    if (x == 1 || x == 2){
        return 1;
    }
    if (x == 3){
        return 3;
    }
    while(x % 2 == 0){
        x /= 2;
    }
    if (x % 3 == 0){
        return 3;
    } else{
        return 1;
    }
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int res = h1(x);
        cout << res << endl;
    }
}
