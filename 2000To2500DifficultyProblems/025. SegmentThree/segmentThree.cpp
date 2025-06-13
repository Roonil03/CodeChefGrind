#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> rem(n);
        for(int i{0}; i < n; i++){
            int a;
            cin >> a;
            rem[i] = a % 3;
        }
        int minc = INT_MAX;
        for(int i {0}; i < 3; i++){
            for(int j {0}; j < 3; j++){
                int cinc {0};
                cinc += (i - rem[0] + 3) % 3;
                cinc += (j - rem[1] + 3) % 3;
                vector<int> r = rem;
                r[0] = i;
                r[1] = j;
                for(int k {2}; k < n; k++){
                    int req = (3 - (r[k-2] + r[k-1]) % 3) % 3;
                    int inc = (req - r[k] + 3) % 3;
                    cinc += inc;
                    r[k] = (r[k] + inc) % 3;
                }
                minc = min(minc, cinc);
            }
        }
        cout << minc << endl;
    }
}
