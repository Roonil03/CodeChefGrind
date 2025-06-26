#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> c(64, 0);
        for(int i {0}; i < n; i++){
            int a;
            cin >> a;
            for(int j {0}; j < 31; j++){
                if(a & (1 << j)){
                    c[j]++;
                }
            }
        }
        long long r {0};
        for(int i {0}; i < 63; i++){
            if(c[i]){
                r |= (1LL << i);
            }
            c[i + 1] += c[i] / 2;
        }
        cout << r << endl;
    }
}
