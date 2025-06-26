#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    int M {0};
    for(int i {0}; i < N; ++i){
        cin >> A[i];
        M = max(M, A[i]);
    }
    vector<vector<int>> dv(M+1);
    for(int d {1}; d <= M; ++d){
        for(int v = d; v <= M; v += d){
            dv[v].push_back(d);
        }
    }
    vector<int> lb(M+1, -1);
    int sp {-1};
    long long ans {0};
    int l {0};
    for(int r {0}; r < N; ++r){
        int y = A[r];
        int b = lb[y];
        if(y > K){
            b = max(b, sp);
        }
        l = max(l, b + 1);
        ans += r - l + 1;
        if(y == K) {
            sp = r;
        }
        if(y > K){
            int w = y - K;
            for(int d : dv[w]){
                if(d > K){
                    lb[d] = r;
                }
            }
        }
    }
    cout << ans;
}
