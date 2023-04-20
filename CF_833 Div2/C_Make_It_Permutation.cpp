#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
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
ll n,c,d;
cin>>n>>c>>d;
ll a[n];
for(ll i=0;i<n;i++)cin>>a[i];
unordered_set<ll>ust;
nf(i,0,n)ust.insert(a[i]);

vector<ll>v;

for(auto elm:ust)v.psb(elm);
ll res=0;
if(v[0]!=1){
    v.psb(1);
     res+=d;
}
sort(v.begin(),v.end());

ll ans=9223372036854775807;

for(ll i=0;i<v.size();i++){
    if(v[i]==i+1){
        ans=min(ans,c*(v.size()-i-1)
    }
}

   
}

return 0;
}