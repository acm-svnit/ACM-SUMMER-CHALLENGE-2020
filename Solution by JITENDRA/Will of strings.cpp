#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll t;cin>>t;while(t--) 

void Manacher(string s)
{
    ll n=s.length();
    vector<ll>d1(n);
    for(ll i=0,l=0,r=-1 ; i<n;i++)
    {
        ll k = (i>r) ? 1:min(r-i+1,d1[l+r-i]); 
        while(i-k>=0 && i+k<n && s[i-k]==s[i+k])
            k++;
        d1[i]=k--;
        if(i+k>r)
            l=i-k,r=i+k;
    }
    vector<ll>d2(n);
    for(ll i=0,l=0,r=-1 ; i<n;i++)
    {
        ll k = (i>r) ? 0:min(r-i+1,d2[l+r-i+1]); 
        while(i-k-1>=0 && i+k<n && s[i-k-1]==s[i+k])
            k++;
        d2[i]=k--;
        if(i+k>r)
            l=i-k-1,r=i+k;
    }
    ll ans=0;
    for(ll i=0;i<n;i++) ans+=d1[i]+d2[i];
    cout<<ans<<"\n";
}



int main()
{ 
    fastio;
    string s;
    t(){
		ll x;cin>>x;
        cin>>s;
		Manacher(s);
    }
    
    
       
}