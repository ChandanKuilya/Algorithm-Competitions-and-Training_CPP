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
if(n%2==0)cout<<-1<<'\n';
else{
    /*
    ll flg1=1;  // 2x-1
    ll flg2=2;  // 2x+1
  vector<ll>ans;
  ll cnt;
 if((((n-1)/2)%2)!=0){
    cnt=0;
  ans.psb(2);
  if(((n-1)/2)==3){
    ans.psb(2);
     cnt+=2;
  }
  else if(((n-1)/2)>3){
    for(ll i=0;i<(n/7);i++){
        ans.psb(2);
        cnt+=(n/7);
    }
    ans.psb(2);
    cnt++;
  }
 }
 else if((((n+1)/2)%2)!=0){
    cnt=0;
    //ans.psb(1);
    if(((n+1)/2)==3){
    ans.psb(2);
    cnt+=2;
  }
  else if(((n+1)/2)>3){
     for(ll i=0;i<(n/5);i++){
        ans.psb(1);
        cnt+=(n/5);
    }
    ans.psb(2);
    cnt++;
  }
 }
 cout<<cnt<<'\n';
 for(ll i=ans.size()-1;i>=0;i--){
    cout<<ans[i]<<" ";
 }
 cout<<'\n';
 */
ll cnt=40;
vector<ll>ans;
while(n!=1 && cnt>0){
   if((((n-1)/2)%2)!=0){
      n=(n-1)/2;
      ans.psb(2);
    }
    else{
        n=(n+1)/2;
        ans.psb(1);
    }
}
if(n==1){
    cout<<ans.size()<<'\n';
    for(ll i=ans.size()-1;i>=0;i--){
    cout<<ans[i]<<" ";
 }
}
cout<<'\n';
}
   
}

return 0;
}