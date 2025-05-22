#include <bits/stdc++.h>
using namespace std;

int helper() {
	// your code goes here
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> pos(N + 1);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        pos[A[i]] = i;
    }
    vector<int> a(N + 1), b(N + 1);
    for (int K = 1; K <= N; ++K) {
        int x = N - K + 1;
        if (K == 1) {
            a[K] = pos[x];
            b[K] = pos[x];
        } else {
            a[K] = min(a[K - 1], pos[x]);
            b[K] = max(b[K - 1], pos[x]);
        }
    }
    for (int K = N - 1; K >= 1; --K) {
        if (b[K] - a[K] + 1 == K) {
            return K;
        }
    }
    return 0;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        cout << helper()<< "\n";
    }
    return 0;
}
