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



bool issortedArray(vector<ll>&a , ll n){
    if(n==0 || n==1 )return true;

    for(ll i=1;i<n;i++){
        if(a[i-1]>a[i])return false;
    }
    
    return true;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//vector<ll>v;
ll t;
cin>>t;
nf(ttc,0,t){
ll n,k;
cin>>n>>k;
vector<ll>arr;
nf(i,0,k)cin>>arr[i];

vector<ll>prfarr;

for(ll i=k-1;i>=1;i--){
    prfarr.push_back(arr[i]-arr[i-1]);
}
   if(n==k){
    
   }
}

return 0;
}
