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
ll t=1;
//cin>>t;
nf(ttc,0,t){
ll n,q;
cin>>n>>q;
ll a[n];
nf(i,0,n)cin>>a[i];
ll ps[n+2];
ps[-1]=0;
ps[n]=0;
unordered_map<ll,ll>mp;
for(ll i=0;i<n;i++){
    if(mp.find(a[i])==mp.end()){
      mp[a[i]]=1;
    }
    else{
        mp[a[i]]++;
    }
if(i==0)
 ps[i]=(mp[a[i]])*(mp[a[i]])*a[i];
 else{
    ps[i]=ps[i-1]+(mp[a[i]])*(mp[a[i]])*a[i];
 }
}
vector<ll>ans;
for(ll i=0;i<q;i++){
    ll l,r;
    cin>>l>>r;
    ans.push_back(ps[n-1]-ps[l-1]-ps[r+1]);
}
  for(ll i=0;i<q;i++){
    cout<<ans[i]<<'\n';
  } 
}

return 0;
}