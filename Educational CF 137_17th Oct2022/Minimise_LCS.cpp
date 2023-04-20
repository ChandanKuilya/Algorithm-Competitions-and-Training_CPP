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
string s1,s2;
cin>>s1;
cin>>s2;
ll ans=0;
unordered_map<char,ll>mp;
unordered_map<char,ll>np;

for(ll i=0;i<n;i++){
    mp[s1[i]]++;
    np[s2[i]]++;
}

for(ll i=0;i<n;i++){
    ll t1=0,t2=0;
    if(mp.find(s1[i])!=mp.end())t1=mp[s1[i]];
    if(np.find(s1[i])!=np.end())t2=np[s1[i]];

ans=max(ans,min(t1,t2));
}

cout<<ans<<'\n';

}

return 0;
}