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
vector<vector<int>>ans;

int cnt;
cnt=(n*n);

for(ll j=0;j<n;j++){
vector<int>v;
for(int i=0;i<n;i++){
    if(cnt==1 || cnt==2){
        v.psb(cnt);
        cnt=(n*n)-1;
    }
    else{
    v.psb(cnt);
    cnt-=2;
    }

}
ans.push_back(v);
}

for(ll j=0;j<n;j++){
for(int i=0;i<n;i++){
cout<<ans[j][i]<<" ";

}
cout<<'\n';
}
cout<<'\n';
}

return 0;
}