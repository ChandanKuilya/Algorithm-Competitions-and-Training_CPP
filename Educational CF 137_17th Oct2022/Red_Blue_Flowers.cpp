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

ll n,a[102],r[102];
ll res;
ll grid[102][20001];

void gridpath(ll id,ll p,ll q){
if(id==n+1){
    res=max(res,min(p,q));
    return;
}
if(grid[id][p]>=q && grid[id][p]!=0)return;
grid[id][p]=q;
gridpath(id+1,p+a[id],q);
gridpath(id+1,p,q+r[id]);

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
cin>>n;
res=0;
for(ll i=1;i<=n;++i){
    for(ll j=0;j<20001;++j){
        grid[i][j]=0;
    }
}
ll a[n];
ll r[n];
for(ll i=1;i<=n;++i)cin>>a[i];
for(ll i=1;i<=n;++i)cin>>r[i];

gridpath(1,0,0);

cout<<res<<'\n';
   
}

return 0;
}