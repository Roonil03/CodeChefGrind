#include <bits/stdc++.h>
using namespace std;

int h1(int n, vector<int>aq){
    queue<tuple<int, int, int>> q;
    set<tuple<int, int, int>> vis;
    q.push({0, 0, aq[0]});
    while(!q.empty()){
        auto[a, b, c] = q.front();
        q.pop();
        // if (c <= 1){
        //     return b;
        // }
        if (vis.count({a, b, c})){
            continue;
        }
        vis.insert({a, b, c});
        int bn = c - 1;
        if(bn == 0){
            return b + 1;
        }
        if(bn > 0){
            q.push({a, b+1, bn});
        }
        // else{
        //     return b + 1;
        // }
        for(int i: {a - 1, a + 1}){
            // if(i >= 0 && i < n){
            //     int s = max(0, aq[i] - b);
            //     int o = max(1, s);
            //     q.push({i, b + 1, o});
            // }
            if(i < 0 || i >= n){
                continue;
            }
            int s = max(0, aq[i] - b);
            if (s == 0){
                return b + 1;
            }
            q.push({i, b + 1, s});
        }
    }
    return -1;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>aq(n);
        for(int i{0}; i < n; i++){
            cin >> aq[i];
        }
        cout << h1(n, aq) << endl;
    }
}
