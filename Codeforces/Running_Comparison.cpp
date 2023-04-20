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
ll b[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}

vector<int>hs1(n,0);
vector<int>hs2(n,0);

for(int i=0;i<n;i++){
    if(2*a[i]<b[i])hs1[i]++;
    else if(2*b[i]<a[i])hs2[i]++;
}
ll cnt=0;
for(int i=0;i<n;i++){
    if(hs1[i]==hs2[i] && hs1[i]==0)cnt++;
}
  cout<<cnt<<'\n'; 
}

return 0;
}