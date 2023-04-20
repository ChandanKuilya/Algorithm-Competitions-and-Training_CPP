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
vector<int>arr(n);
int sum=0;
int psum[n+1];
psum[-1]=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(i==0){
        psum[i]=arr[i];
    }
    else{
        psum[i]=arr[i]+psum[i-1];
    }
}
vector<int>v;
for(int i=0;i<q;i++){
    int a,b,c;
    int dev=0;
    cin>>a>>b>>c;
    a--;
    b--;
    dev=((b-a+1)*c)-(psum[b]-psum[a-1]);
   /* else if(a==0){
    dev=((b-a+1)*c)-(psum[b]-psum[a]);
   }
   */
   v.psb(dev);
}
for(int i=0;i<q;i++){

   if((psum[n-1]+v[i])%2!=0)cout<<"YES"<<'\n';
   else
        cout<<"NO"<<'\n';
}

}
return 0;
}