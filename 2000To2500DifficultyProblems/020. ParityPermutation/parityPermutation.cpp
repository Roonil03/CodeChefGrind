#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
vector<long long> fact;

void precompute() {
    int max_n = 1e5;
    fact.resize(max_n + 1);
    fact[0] = 1;
    for (int i = 1; i <= max_n; ++i) {
        fact[i] = (fact[i-1] * i) % MOD;
    }
}

int main() {
	// your code goes here
    precompute();
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        int even_count = 0, odd_count = 0;
        for (int i = 0; i < N; ++i) {
            int x;
            cin >> x;
            if (x % 2 == 0) {
                ++even_count;
            } else {
                ++odd_count;
            }
        }
        if (K == 0) {
            if (even_count == N || odd_count == N) {
                cout << fact[N] % MOD << '\n';
            } else {
                cout << "0\n";
            }
        } else {
            int E = N / 2;
            int O = (N + 1) / 2;
            long long ans = 0;
            if (even_count == E && odd_count == O) {
                ans = (ans + fact[E] * fact[O]) % MOD;
            }
            if (even_count == O && odd_count == E) {
                ans = (ans + fact[O] * fact[E]) % MOD;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
