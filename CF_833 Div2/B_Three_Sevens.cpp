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
ll m;
cin>>m;
vector<ll>v[m];
for(ll j=0;j<m;j++){
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll elm;
        cin>>elm;
        v[j].push_back(elm);
    }
}

unordered_map<int,int>mp;
vector<int>res_v;

for(ll i=m-1;i>=0;i--){
    bool flg = false;
    for(auto it: v[i]){
        if(mp.find(it)==mp.end() && flg==false){
            flg=true;
            res_v.psb(it);
            mp[it]++;
        }
        else{
            mp[it]++;
        }
    }
}

if(m==res_v.size()){
    reverse(res_v.begin(),res_v.end());
    for(auto it: res_v)cout<<it<<" ";
}
else {
    cout<<-1;
}
cout<<'\n';



   
}

return 0;
}