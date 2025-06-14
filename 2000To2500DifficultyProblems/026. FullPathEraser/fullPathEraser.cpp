#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// vector<vector<int>> adj;
// vector<long long> vals;
// vector<int> par;
// vector<ll> subtree_gcd;

// ll gcd(ll a, ll b){
//     return b == 0 ? a : gcd(b, a % b);
// }

// void dfs(int node, int p){
//     par[node] = p;
//     subtree_gcd[node] = vals[node];
//     for(int i : adj[node]){
//         if(i != p){
//             dfs(i, node);
//             subtree_gcd[node] = gcd(subtree_gcd[node], subtree_gcd[i]);
//         }
//     }
// }

// ll dgcd(int node, int p, vector<bool>& vis){
//     if(vis[node]){
//         return 0;
//     }
//     return subtree_gcd[node];
// }

// ll solve(int tar){
//     ll res = 0;
//     int curr = tar;
//     while(curr != -1){
//         for(int child : adj[curr]){
//             if(child != par[curr]){
//                 bool is_ancestor = false;
//                 int temp = tar;
//                 while(temp != -1 && temp != curr){
//                     if(temp == child){
//                         is_ancestor = true;
//                         break;
//                     }
//                     temp = par[temp];
//                 }
//                 if(!is_ancestor){
//                     res += subtree_gcd[child];
//                 }
//             }
//         }
//         curr = par[curr];
//     }
//     return res;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vals.resize(n+1);
//         adj.clear();
//         adj.resize(n+1);
//         par.resize(n+1);
//         subtree_gcd.resize(n+1);
//         for(int i = 1; i <= n; i++){
//             cin >> vals[i];
//         }
//         for(int i = 0; i < n-1; i++){
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         dfs(1, -1);
//         long long res = 0;
//         for(int i = 1; i <= n; i++){
//             long long b = solve(i);
//             res = max(res, b);
//         }
//         cout << res << endl;
//     }
// }

// vector<vector<int>> adj;
// vector<long long> vals;
// vector<int> par;
// vector<ll> subtree_gcd;
// vector<ll> sum_of_g;

// ll gcd(ll a, ll b){
//     return b == 0 ? a : gcd(b, a % b);
// }

// void dfs(int node, int p){
//     par[node] = p;
//     subtree_gcd[node] = vals[node];
//     sum_of_g[node] = 0;
    
//     for(int i : adj[node]){
//         if(i != p){
//             dfs(i, node);
//             subtree_gcd[node] = gcd(subtree_gcd[node], subtree_gcd[i]);
//             sum_of_g[node] += subtree_gcd[i];
//         }
//     }
// }

// ll solve(int tar){
//     ll res = sum_of_g[tar];
    
//     int curr = par[tar];
//     while(curr != -1){
//         res += (sum_of_g[curr] - subtree_gcd[tar]);
//         tar = curr;
//         curr = par[curr];
//     }
    
//     return res;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vals.resize(n+1);
//         adj.clear();
//         adj.resize(n+1);
//         par.resize(n+1);
//         subtree_gcd.resize(n+1);
//         sum_of_g.resize(n+1);
        
//         for(int i = 1; i <= n; i++){
//             cin >> vals[i];
//         }
//         for(int i = 0; i < n-1; i++){
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         dfs(1, -1);
        
//         long long res = 0;
//         for(int i = 1; i <= n; i++){
//             long long b = solve(i);
//             res = max(res, b);
//         }
//         cout << res << endl;
//     }
// }

#define pb push_back
#define all(_obj) _obj.begin(), _obj.end()
#define F first
#define S second
#define pll pair<ll, ll>
#define vll vector<ll>
ll INF = 1e18;
const int N = 3e5 + 11, mod = 1e9 + 7;
ll max(ll a, ll b) { return ((a > b) ? a : b); }
ll min(ll a, ll b) { return ((a > b) ? b : a); }
inline ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  a %= b;
  return gcd(b, a);
}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll a[N], maxbeauty, g[N], sumofg[N];
vll v[N];
void dfsforgcd(int u, int p = -1)
{
  g[u] = a[u];
  sumofg[u] = 0;
  for (auto x : v[u])
  {
    if (x == p)
      continue;
    dfsforgcd(x, u);
    g[u] = gcd(g[u], g[x]);
    sumofg[u] += g[x];
  }
}
void dfs(int u, int p, ll beautytillparent)
{
  ll beauty = beautytillparent;
  if (p != -1)
    beauty += sumofg[p] - g[u];
  beautytillparent = beauty;
  for (auto x : v[u])
  {
    if (x == p)
      continue;
    dfs(x, u, beautytillparent);
    beauty += g[x];
  }

  maxbeauty = max(maxbeauty, beauty);
}
void sol(void)
{
  int n;
  cin >> n;
  maxbeauty = 0;
  for (int i = 1; i <= n; i++)
    cin >> a[i], v[i].clear();
  for (int i = 1; i <= n - 1; i++)
  {
    int x, y;
    cin >> x >> y;
    v[x].pb(y);
    v[y].pb(x);
  }
  dfsforgcd(1);
  dfs(1, -1, 0);
  cout << maxbeauty << '\n';
  return;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  int test = 1;
  cin >> test;
  while (test--)
    sol();
}

