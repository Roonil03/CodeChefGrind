#include <bits/stdc++.h>
using namespace std;

// const int MAXN = 1e9;
// vector<int> divCount(MAXN, 0);

// int helper(int num){
//     if (num == 1){
//         return 1;
//     }
//     int count {0};
//     int sqrtNum = sqrt(num);
//     for (int i {1}; i <= sqrtNum; i++) {
//         if (num % i == 0) {
//             count++;
//             if (i != num / i) {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// void solve(){
//     int N;
//     cin >> N;
//     int bestK = N;
//     int maxDivisors {1};
//     int sqrtN = sqrt(N);
//     for (int K = 2; K <= sqrtN; K++) {
//         if (N % K == 0) {
//             int M = N / K;
//             int divisors = countDivisors(M);
//             if (divisors > maxDivisors) {
//                 maxDivisors = divisors;
//                 bestK = K;
//             }
//             if (K != M) {
//                 divisors = countDivisors(K);
//                 if (divisors > maxDivisors) {
//                     maxDivisors = divisors;
//                     bestK = M;
//                 }
//             }
//         }
//     }
//     cout << bestK << '\n';
// }

vector<pair<long long, int>> factorize(long long n) {
    vector<pair<long long, int>> factors;
    for (long long i {2}; i * i <= n; i++) {
        if (n % i == 0) {
            int count {0};
            while (n % i == 0) {
                count++;
                n /= i;
            }
            factors.emplace_back(i, count);
        }
    }
    if (n > 1){
        factors.emplace_back(n, 1);
    }
    return factors;
}

long long solve(long long N) {
    auto factors = factorize(N);
    int exp1 = 0;
    for (auto &p : factors){
        exp1 = max(exp1, p.second);
    }
    long long K {LLONG_MAX};
    for (auto &p : factors) 
        if (p.second == exp1 && p.first < K) 
            K = p.first;
    return K;
}

int main() {
	// your code goes here
    int T; 
    cin >> T;
    while (T--) {
        long long N; 
        cin >> N;
        cout << solve(N) << '\n';
    }
    return 0;
}
