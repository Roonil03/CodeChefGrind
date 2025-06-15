#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    // int T;
    // cin >> T;
    // while (T--) {
    //     long long N, K;
    //     cin >> N >> K;
    //     if (N < K) {
    //         long long x1 = N / 2;
    //         long long x2 = (N + 1) / 2;
    //         if (x1 * (N - x1) >= x2 * (N - x2)) {
    //             cout << x1 << "\n";
    //         } else {
    //             cout << x2 << "\n";
    //         }
    //     } else {
    //         long long r = N % K;
    //         long long max_val {0}, b {0};
    //         for (int a : {0, r/2, (r+1)/2, r, (K+r)/2, (K+r+1)/2, K-1}) {
    //             if (a >= 0 && a < K) {
    //                 long long val = a * ((N - a) % K);
    //                 if (val > max_val) {
    //                     max_val = val;
    //                     b = a;
    //                 }
    //             }
    //         }
    //         cout << b << "\n";
    //     }
    // }
    // return 0;
    int T;
    cin >> T;
    while (T--) {
        // int N, P, Q;
        // cin >> N >> P >> Q;
        // vector<long long> A(N);
        // for (int i = 0; i < N; i++) {
        //     cin >> A[i];
        // }
        // if (P == 0 && Q == 0) {
        //     cout << *max_element(A.begin(), A.end()) - *min_element(A.begin(), A.end()) << "\n";
        //     continue;
        // }
        // sort(A.begin(), A.end());
        // long long pos_sum = 0, neg_sum = 0;
        // for (long long x : A) {
        //     if (x > 0) pos_sum += x;
        //     else neg_sum += x;
        // }
        // long long res = A[N-1] - A[0];
        // int max_ops = min(P + Q, N - 2);
        // if (max_ops > 0 && Q > 0) {
        //     long long max_pos = pos_sum - neg_sum;
        //     long long min_neg = neg_sum - pos_sum;
        //     if (max_ops >= N - 2) {
        //         res = max(res, max_pos - min_neg);
        //     }
        // }
        // cout << res << "\n";
        // int N, P, Q;
        // cin >> N >> P >> Q;
        // vector<long long> A(N);
        // for (int i = 0; i < N; i++) {
        //     cin >> A[i];
        // }
        // if (P == 0 && Q == 0) {
        //     cout << *max_element(A.begin(), A.end()) - *min_element(A.begin(), A.end()) << "\n";
        //     continue;
        // }
        // sort(A.begin(), A.end());
        // long long res = A[N-1] - A[0];
        // for (int ua = 0; ua <= min(P, N-1); ua++) {
        //     for (int us = 0; us <= min(Q, N-1-ua); us++) {
        //         if (ua + us == 0){
        //             continue;
        //         }
        //         long long mv = 0;
        //         int em = min(ua + 1, N);
        //         for (int i = N - em; i < N; i++) {
        //             mv += A[i];
        //         }
        //         long long nv = A[0];
        //         int si = max(0, N - em - us);
        //         for (int i = si; i < N - em; i++) {
        //             nv -= A[i];
        //         }
        //         res = max(res, mv - nv);
        //         if (us > 0) {
        //             nv = A[0];
        //             for (int i = 0; i < us; i++) {
        //                 if (N - 1 - i >= em) {
        //                     nv -= A[N - 1 - i];
        //                 }
        //             }
        //             res = max(res, mv - nv);
        //         }
        //     }
        // }
        // if (P > 0) {
        //     long long s = 0;
        //     for (int i = N - P - 1; i < N; i++) {
        //         s += A[i];
        //     }
        //     res = max(res, s - A[0]);
        // }
        // if (Q > 0) {
        //     long long nv = A[0];
        //     for (int i = 0; i < Q; i++) {
        //         nv -= A[N - 1 - i];
        //     }
        //     res = max(res, A[N-1] - nv);
        // }
        // cout << res << "\n";
        // int N, P, Q;
        // cin >> N >> P >> Q;
        // vector<long long> A(N);
        // for (int i = 0; i < N; i++) {
        //     cin >> A[i];
        // }
        // if (N == 1) {
        //     cout << 0 << "\n";
        //     continue;
        // }
        // long long mn = *min_element(A.begin(), A.end());
        // long long mx = *max_element(A.begin(), A.end());
        // vector<long long> av;
        // for (long long x : A) {
        //     if (x != mn && x != mx) {
        //         av.push_back(abs(x));
        //     }
        // }
        // sort(av.rbegin(), av.rend());
        // int mo = min(P + Q, N - 2);
        // long long S = 0;
        // for (int i = 0; i < min(mo, (int)av.size()); i++) {
        //     S += av[i];
        // }
        // long long res = S + mx - mn;
        // cout << res << "\n";
        int N;
        cin >> N;
        int P, Q;
        cin >> P >> Q;
        vector<long long> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        long long res = A[N-1] - A[0];
        vector<long long> B;
        for (int i = 1; i < N-1; i++) {
            B.push_back(abs(A[i]));
        }
        sort(B.begin(), B.end());
        
        for (int i = 0; i < min(P + Q, N - 2); i++) {
            res += B[B.size() - 1 - i];
        }
        cout << res << "\n";
    }
}
