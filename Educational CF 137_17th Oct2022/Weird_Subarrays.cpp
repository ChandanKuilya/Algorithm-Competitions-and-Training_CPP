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
ll a[n];
nf(i,0,n)cin>>a[i];
vector<ll>nv;
nv.psb(1);
for(ll i=1;i<n-1;i++){
    if(a[i]>a[i-1] && a[i]>a[i+1])nv.psb(i+1);
}
nv.psb(n);
ll res,temp;
res=0;
for(ll i=1;i<nv.size();i++){
    temp=(nv[i]-nv[i-1])+1;
    res+=temp*(temp+1)/2;
}
ll k=nv.size()-2;
cout<<(res-k)<<'\n';
}

return 0;
}