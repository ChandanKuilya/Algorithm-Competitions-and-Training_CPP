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
//cin>>t;
nf(ttc,0,t){
string s,p;

cin>>s;
cin>>p;
vector<char>v;
for(ll i=0;i<s.size();i++){
v.push_back(s[i]);
}
int ans=-1;
for(int i=0;i<p.size();i++){
    if(v[i]!=p[i]){
        ans=i+1;
        break;
    }
}
cout<<ans<<'\n';
}

return 0;
}