#include <bits/stdc++.h>
using namespace std;
#define ll int
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
nf(i,0,n){
    cin>>a[i];
} 
nf(i,0,n){
    cin>>b[i];
}

nf(i,0,n){
    if(a[i]<=b[i])swap(a[i],b[i]);
}

(*max_element(a,a+n)==a[n-1] && *max_element(b,b+n)==b[n-1])?cout<<"YES"<<'\n':cout<<"NO"<<'\n';
}

return 0;
}