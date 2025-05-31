#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int r{0}, b{0}, p{0}, q{0};
    cin >> r >> b >> p >> q;
    cout<< ((r*p) > (q*b) ? r*p : q*b)<<endl;
}
