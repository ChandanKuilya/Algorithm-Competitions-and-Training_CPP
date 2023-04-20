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
vector<ll> a(n+1);
        vector<ll> pref(n+1,0);
        for(ll i=1;i<=n;i++){
            cin>>a[i];
            pref[i]=pref[i-1]+a[i];
        }
 
        map<ll,ll> freq;
        ll mx=0,ans=0;
 
        for(ll i=n;i>0;i--){
            freq[pref[i]]++;
            mx=max(mx,freq[pref[i]]);
            if(a[i]==0){
                ans+=mx;
                mx=0;
                freq.clear();
            }
        }
 
        ans+=freq[0];
 
        cout<<ans<<endl;
}

return 0;
}