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
string s;
cin>>s;
ll n=s.size();
ll flag=0;

if(n!=8)cout<<"No"<<'\n';
else{
   if(s[0]-'A'>=0 || s[n-1]-'A'<=25)flag++;
   if(s[1]-'0'>=1 && s[1]-'0'<=9)flag++;
    if(s[n-2]-'0'>=0 && s[n-2]-'0'<=9)flag++;

if(flag==3)cout<<"Yes"<<'\n';
else
    cout<<"No"<<'\n';
}
/*
for(ll i=0;i<n;i++){
    if(i==0 || i==n-1){
       if(s[i]-'A'>=0 || s[i]-'A'<=25)flag++;
    }
    else{
     if(s[1]-'0'>=1 && s[0]-'0'<=9)flag++;
     if(s[n-2]-'0'>=0 && s[0]-'0'<=9)flag++;
    }
}

cout<<flag<<'\n';

if(flag==8)cout<<"Yes"<<'\n';
else  
    cout<<"No"<<'\n';
    */
}

return 0;
}