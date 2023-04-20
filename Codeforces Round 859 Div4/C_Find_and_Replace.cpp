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
string s;
cin>>s;
string ans,res;
bool flag1=true;
bool flag2=true;
unordered_map<char,char>ump1,ump2;
//ans.push_back('0');
for(int i=0;i<n;i++){
   if(i%2==0){
    res.psb('0');
    res.psb('1');
   }
   else{
    ans.psb('1');
    ans.psb('0');
   }
}
for(int i=0;i<n;i++){
    if(ump1.find(s[i])==ump1.end()){
        ump1.insert({s[i],ans[i]});
    }
    else{
    if(ump1[s[i]]!=ans[i])flag1=false;
    }
}

for(int i=0;i<n;i++){
    if(ump2.find(s[i])==ump2.end()){
        ump2.insert({s[i],res[i]});
    }
    else{
        if(ump2[s[i]]!=res[i])flag2=false;
    }
}

if(flag1 or flag2)cout<<"YES"<<'\n';
else
    cout<<"NO"<<'\n';


}

return 0;
}