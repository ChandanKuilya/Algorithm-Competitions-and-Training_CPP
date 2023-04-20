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
ll t=1;
///cin>>t;
nf(ttc,0,t){
ll n,k;
cin>>n>>k;
ll a[n];
nf(i,0,n)cin>>a[i];

ll ans=0;
ll ansid=0;

ll id=0;
ll cnt=k;
while(cnt>0){
    if(k<=a[id]){
       ansid=id;
       ans=k;
        break;
    }
    k-=a[id];

   id=(id+1)%n;

cnt--;
}
cout<<(ansid+1)<<" "<<ans<<'\n';
   
}

return 0;
}