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
ll n;
cin>>n;
ll v[n];
nf(i,0,n)cin>>v[i];
ll prfs[n];
prfs[0]=v[0];
for(ll i=1;i<n;i++){
    prfs[i]=max(prfs[i-1],v[i]);
}
ll sufs[n];
sufs[n-1]=v[n-1];
for(ll i=n-2;i>=0;i--){
    sufs[i]=max(sufs[i+1],v[i]);
}
vector<ll>ans;
nf(i,0,n){
if(i==0){
    ans.psb(v[i]-sufs[i+1]);
}
else if(i==n-1)ans.psb(v[i]-prfs[i-1]);
else
    ans.psb(v[i]-max(prfs[i-1],sufs[i+1]));
}
nf(i,0,n)cout<<ans[i]<<" ";
cout<<'\n';
}

return 0;
}