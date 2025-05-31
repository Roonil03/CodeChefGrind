#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, q;
    cin >> n >> m >> q;
    vector<long long> queries(q);
    for (int i = 0; i < q; ++i){
        cin >> queries[i];
    }
    for (auto s : queries) {
        long long cursum = 0;
        int row = 1;
        while (true) {
            if (cursum + (long long)m * row < s) {
                cursum += (long long)m * row;
                row++;
            } else {
                int take = (int)((s - cursum + row - 1) / row);
                cursum += (long long)row * take;
                cout << 1 << " " << row << "\n";
                for (int i = 1; i < row; ++i) {
                    if (cursum - i == s) cout << m - 1 << " ";
                    else cout << m << " ";
                }
                cout << take << "\n";
                break;
            }
        }
    }
    return 0;
}
