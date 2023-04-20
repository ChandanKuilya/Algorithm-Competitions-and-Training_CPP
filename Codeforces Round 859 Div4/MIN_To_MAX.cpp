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
for(int i=0;i<n;i++)cin>>a[i];
int cnt=0;
sort(a,a+n);
for(int i=0;i<n;i++){
    if(a[i]!=a[0])cnt++;
}
/*
unordered_map<int,int>mp;
int mn=INT_MAX;
for(int i=0;i<n;i++){
    mp[a[i]]++;
    if(a[i]<mn)mn=a[i];
}
*/
/*
vector<int>v;
for(auto it:mp){
    v.psb(it.second);
}
int sz=v.size();
sort(v.begin(),v.end());
*/

if(n==1)cout<<0<<'\n';
else
    cout<<cnt<<'\n';


}

return 0;
}