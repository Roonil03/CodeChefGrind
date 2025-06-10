#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a, b;
    cin >> a >> b;
    int c = (a + 1) * 4 + b * 3;
    cout << (c % 8 == 0 ? c/8 : c/8 + 1) << endl;
}
