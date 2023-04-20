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
ll ans,t,t1,t2;
ans=0;
t=0;
t1=0;
ll n;
cin>>n;
ll s[n];
nf(i,0,n)cin>>s[i];

for(ll i=0;i<n;i++){
    
    if(s[i]==0)t++;
    else if(s[i]==1)t1++;
    t2=min(t,t1);
    t=t-t2;
    t1=t1-t2;
    ans+=t2;
}
   ll fans;
   fans=(ans+t1/3);
cout<<fans<<'\n';
}

return 0;
}