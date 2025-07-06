#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

#define N 100005
ll mod=1e9+7;

// int main() {
// 	// your code goes here
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     l1: while(t--){
//         ll n;
//         cin >> n ;
//         vector<ll>g[(2*n)+2];
//         ll  a[n+5];
//         for(ll i = 1; i <= n ; i++){
//         	cin >> a[i];
//         }
//         ll  ca[n+5];
//         for(ll i = 1; i  <= n ; i++){
//         	cin >>ca[i];
//         	g[ca[i]].push_back(a[i]);
//         }
//         ll  b[n+5];
//         for(ll i = 1; i <= n ; i++){
//         	cin >> b[i];
//         }
//         ll  cb[n+5];
//         ll cnt[(2*n)+4] ={0};
//         for(ll i = 1; i <=  n ; i++){
//         	cin >> cb[i];
//         	cnt[cb[i]]++;
//         	g[cb[i]].push_back(b[i]);
//         }
//         for(ll i = 1; i <= n ; i++){
//         	sort(g[i].begin(),g[i].end());
//         }
        
//         int  flg = 0;
//         ll val = 1e12;
//         for(int i = 1; i <= n ; i++){
//         	if(cnt[ca[i]] == 0 ){
//         		if( val!= 1e12 && a[i] < val){
//         			cout<<"NO"<<endl;
//         			goto l1;
//         		}
//         		if(val == 1e12 || val <= a[i]){
//         			val = a[i];
//         			continue;
//         		}
        
//         	}
//         	else if( i == 1){
//         		for(auto x:g[ca[1]]){
//         			val = min((ll)x,val);
//         		}
//         		continue;
//         	}
//         	else if(lower_bound(g[ca[i]].begin(),g[ca[i]].end(),val) != g[ca[i]].end()){
//         		auto id = lower_bound(g[ca[i]].begin(),g[ca[i]].end(),val);
//         		ll id1 = id-g[ca[i]].begin();
//         		val = max(g[ca[i]][id1],val);
//         		g[ca[i]].erase(id);
//         	}
//         	else{
//         		cout<<"NO"<<endl;
//         		goto l1;
//         	}
//         }
//         cout << "Yes"<<endl;
//     }
// }

ll exgcd(ll a,ll b,ll&x,ll&y)
{
    if(a==0)
    {
        x=0,y=1;
        return b;
    }
    ll x1,y1;
    ll ans=exgcd(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return ans; 
}

ll pw(ll x,ll n,ll m)
{
    ll res=1;
    while(n>0)
    {
        if(n % 2 ==1)
        res=(res * x)%m;
        x=(x*x)%m;
        n=n/2;
    }
    return res;
}

ll modm(ll a,ll b,ll m){
    return ((a%m)*(b%m))%m;
    
}

ll mods(ll a,ll b,ll m){
    return (a%m-b%m+m)%m;
    
}

ll moda(ll a,ll b,ll m) {
    return (a%m+b%m)%m;
    
}

ll modinverse(ll A,ll M)
{
    return pw(A,M-2,M) % M;
}

ll mex(vector<ll>&ans,ll n)
{
	ll c=0,i;
	sort(ans.begin(),ans.end());
	for(i=0;i<n;i++)
	{
		if(ans[i]>c)
		return c;
		else if(ans[i]==c)
		c++;
	}
	return c;
}

ll fact[N],invfact[N];

void pre1()
{
    fact[0]=1;
    for(ll i=1;i<N;i++)
    {
    fact[i]=(fact[i-1]*i);
    fact[i]%=mod;
    }
    invfact[N-1]=modinverse(fact[N-1],mod);
    for(ll i=N-2;i>=0;i--)
    {
        invfact[i]=invfact[i+1]*(i+1);
        invfact[i]%=mod;
    }
}

ll ncr(ll n,ll r) // % mod;
{
    if(n < r) return 0; 
    ll v  = (fact[n] * invfact[n-r]) % mod;
    v = (v * invfact[r]) % mod;
    return v;
}

void solve()
{
    ll n;cin>>n;
    vector<ll>a(n),b(n),ca(n),cb(n);
    map<ll,multiset<ll>>mp;
    for(auto&i:a)cin>>i;
    for(auto&i:ca)cin>>i;
    for(auto&i:b)cin>>i;
    for(auto&i:cb)cin>>i;
    map<ll,ll>isb;
    for(ll i=0;i<n;i++)
    {
        mp[ca[i]].insert(a[i]);
        mp[cb[i]].insert(b[i]);
        isb[cb[i]]=1;
    }
    ll st=-1;
    for(ll i=0;i<n;i++)
    {
        if(!isb[ca[i]])
        {
            if(a[i]<st)
            {
                no;return;
            }
            st=a[i];
            continue;
        }
        auto it=mp[ca[i]].lower_bound(st);
        if(it==mp[ca[i]].end())
        {
            no;return;
        }
        st=*it;
        mp[ca[i]].erase(it);
    }
    yes;
}

int main()
{
    ll t;cin>>t;
    while(t--)
    solve();
}
