#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << min(a, b/2) * 3 << endl;
    }
}
