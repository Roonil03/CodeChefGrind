#include <bits/stdc++.h>
using namespace std;
typedef tuple<int,int,int> T;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        // int n;
        // cin >> n;
        // string s;
        // cin >> s;
        // if (n == 1) {
        //     cout << "1 0\n";
        //     continue;
        // }
        // queue<pair<string,vector<T>>> q;
        // q.push({s,{}});
        // unordered_set<string> v{s};
        // bool f = 0;
        // while (!q.empty() && !f) {
        //     auto [c,p] = q.front();
        //     q.pop();
        //     for (int i = 0; i < c.size() && !f; i++) {
        //         for (int j = i + 1; j < c.size() && !f; j++) {
        //             int z = 0, o = 0;
        //             for (int k = i; k <= j; k++){
        //                 (c[k]=='0') ? z++ : o++;
        //             }
        //             if (z == o) {
        //                 for (int b = 0; b <= 1 && !f; b++) {
        //                     string d = c.substr(0,i) + char('0'+b) + c.substr(j+1);
        //                     if (!v.count(d)) {
        //                         auto w = p;
        //                         w.push_back({i+1,j+1,b});
        //                         if (d.size() == 1) {
        //                             cout << "1 " << w.size() << "\n";
        //                             for (auto [a,b,c] : w)
        //                                 cout << a << " " << b << " " << c << "\n";
        //                             f = 1;
        //                             break;
        //                         }
        //                         v.insert(d);
        //                         q.push({d,w});
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }
        // if (!f) {
        //     int m = n;
        //     vector<T> b;
        //     while (!q.empty()) {
        //         auto [c,p] = q.front();
        //         q.pop();
        //         if (c.size() < m) {
        //             m = c.size();
        //             b = p;
        //         }
        //     }
        //     cout << m << " " << b.size() << "\n";
        //     for (auto [a,b,c] : b)
        //         cout << a << " " << b << " " << c << "\n";
        int n;
        cin >> n;
        string s;
        cin >> s;
        int o = 0, z = 0;
        for (char ch : s) {
            if (ch == '1') o++;
            else z++;
        }
        if (o == 0 || z == 0) {
            cout << n << " 0\n";
            continue;
        }
        vector<T> ops;
        string c = s;
        if (o == z) {
            ops.emplace_back(1, n, 0);
            c = "0";
        } else {
            while (o != z) {
                bool done = false;
                for (int i = 0; i + 1 < (int)c.size(); i++) {
                    if ((c[i] == '1' && c[i+1] == '0') ||
                        (c[i] == '0' && c[i+1] == '1')) {
                        int b = (o > z ? 0 : 1);
                        ops.emplace_back(i+1, i+2, b);
                        if (c[i] == '1'){
                            o--;
                        }else{
                            z--;
                        }
                        if (c[i+1] == '1'){
                            o--;
                        } else{
                            z--;
                        }
                        if (b == 1){
                            o++;
                        } else {
                            z++;
                        }
                        c = c.substr(0, i) + char('0' + b) + c.substr(i+2);
                        done = true;
                        break;
                    }
                }
                if (!done){
                    break;
                }
            }
            if (o == z && c.size() > 1) {
                ops.emplace_back(1, (int)c.size(), 0);
                c = "0";
            }
        }
        cout << c.length() << " " << ops.size() << "\n";
        for (auto &tup : ops) {
            int l, r, b;
            tie(l, r, b) = tup;
            cout << l << " " << r << " " << b << "\n";
        }
    }
}
