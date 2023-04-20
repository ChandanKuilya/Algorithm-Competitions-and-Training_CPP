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
int n;
cin>>n;
ll a[n];
ll b[n];

for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++)cin>>b[i];

int cntz=0,cntn=0;

for(int i=0;i<n;i++){
    if(a[i]==0)cntz++;
    else if(a[i]==1)cntn++;
}
int flag=-1;

if(a[0]!=b[0])flag++;
if(a[n-1]!=b[n-1])flag++;

for(int i=1;i<=n-2;i++){
    if(a[i]!=b[i] && a[i]==0 && cntn==0)flag++;
    if(a[i]!=b[i] && a[i]==1 )flag++;
}
/*
for(int i=0;i<n;i++){
   if(a[i]!=b[i] && i!=n-1){
        if(b[i]==1){
            if((cntz-1)>=0 && cntn>=1)flag++;
        }
    }
}
*/
if(flag<0)cout<<"YES"<<'\n';
else
    cout<<"NO"<<'\n';


}

return 0;
}