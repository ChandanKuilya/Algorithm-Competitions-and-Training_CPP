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
ll id=0,min=INT_MAX;
nf(i,0,n){
    if(a[i]<min){
        min=a[i];
        id=i;
    }
}
if(id!=0)cout<<"Alice"<<'\n';
else
    cout<<"Bob"<<'\n';
   
}

return 0;
}