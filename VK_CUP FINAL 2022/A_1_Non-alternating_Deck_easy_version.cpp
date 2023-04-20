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
ll cnt1=1,cnt2=0;
ll flg=0;
for(int i=2;i<=n-1;i+=2){
   if(i>=(n-(cnt1+cnt2))){
    if(flg%2==0 && flg%4==0 && flg==0){
    cnt2+=(n-(cnt1+cnt2));
    break;
   }
   if(flg%2==0 && flg%4!=0 && flg!=0){
    cnt1+=(n-(cnt1+cnt2));
    break;
   }

   }
   if(flg%2==0 && flg%4==0 && flg==0){
    cnt2+=i;
    cnt2+=(i+1);
    flg+=2;
   }
   if(flg%2==0 && flg%4!=0 && flg!=0){
    cnt1+=i;
    cnt1+=(i+1);
    flg+=2;
   }


}
cout<<cnt1<<" "<<cnt2<<'\n';
   
}

return 0;
}