#include <bits/stdc++.h>

using namespace std;

#define sz(x) ((int)x.size())
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>

template<typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (T& x : v) is >> x;
    return is;
}

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        os << v[i];
        if (i + 1 < v.size()) os << " ";
    }
    return os;
}

bool h1(string& s){
    bool fg1 = false, fg2 = false;
    for(char c : s){
        if(c == '0'){
            fg1 = true;
        } else if (c == '1'){
            fg2 = true;
        }
        if(fg1 && fg2){
            return true;
        }
    }
    return false;
}

void solve(){
    int n;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;
    if(a == b){
        cout << 0 << endl;
        return;
    }
    if(h1(a) && h1(b)){
        cout << 0 << endl;
    } else{
        cout << 1 << endl;
    }
    
    // cout << arr;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}