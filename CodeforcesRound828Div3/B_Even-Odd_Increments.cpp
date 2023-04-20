//Author:CK
//16th October 2022
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
ll n,q;
cin>>n>>q;
ll a[n];
nf(i,0,n)cin>>a[i];
ll cnt1=0,cnt2=0;
ll qr[q][2];
for(ll i=0;i<q;i++){
 cin>>qr[i][0]>>qr[i][1];
}

ll sum1=0,sum2=0;
for(ll i=0;i<n;i++){
    if(a[i]%2==0){
        cnt2++;
        sum2+=a[i];
    }
    else {
        cnt1++;
       sum1+=a[i];
    }
}
ll ns1=0,ns2=0;
for(ll i=0;i<q;i++){
    //ll ns1=0,ns2=0;
    if(qr[i][0]==0)ns2+=sum2+(cnt2*qr[i][1]);
    else
        ns1+=sum1+(cnt1*qr[i][1]);

cout<<(ns1+ns2)<<'\n';
}

   
}

return 0;
}