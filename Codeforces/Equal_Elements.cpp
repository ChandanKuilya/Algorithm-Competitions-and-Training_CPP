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
for(int i=0;i<n;i++){
    cin>>a[i];
}

unordered_map<int,int>mp;
for(int i=0;i<n;i++){
    mp[a[i]]++;
}
ll mx=-1;
for (auto it:mp){
    if(it.second>mx)mx=it.second;
}

if(mp.size()==n)cout<<(n-1)<<'\n';
else
    cout<<(n-mx)<<'\n';
   
}

return 0;
}