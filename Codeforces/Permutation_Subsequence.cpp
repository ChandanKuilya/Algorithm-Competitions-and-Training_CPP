#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
ll modl= 1e9+7;
#define ull unsigned long long
#define pll pair<ll,ll>
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define nf(i,a,b) for(ll i=a;i<b;i++)
#define rf(i,a,b) for(ll i=b-1;i>=a;i--)
#define psb push_back
#define ppb pop_back
#define mpr make_pair




int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//vector<ll>v;
ll t;
cin>>t;
nf(ttc,0,t){
 ll n; 
 cin >> n;
 ll a[n];
 for(ll i=0;i<n;i++){
    cin>>a[i];
 }
unordered_map<ll, ll> ump;
for (ll i = 0; i < n; i++){
        ump[a[i]]++;
}
ll res = 0,flg=0;
flg++;
for (ll i = 1; i <= n; i++){
ll tmp = flg * ump[i];
tmp %= modl;
res += tmp;
flg = tmp;
res %= modl;
}
cout<<res<<endl;
   
}

return 0;
}