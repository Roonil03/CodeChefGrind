#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        //cout << ((x <= z + 1 || (z + 1 != x) && y == 0) ? "Yes\n" : "No\n");
        bool ok = true;
        if (x > z + 1){
            ok = false;
        } else if(x == z + 1 && y > 0){
            ok = false;
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
}
