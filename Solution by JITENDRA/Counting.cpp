#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 
const double EPS = 1e-9;

int main()
{ 
    string s;
    fastio;
    t()
    {
        ll ans=0,n;
        cin>>n;
        cin>>s;
        for(ll i=0;i<s.length();i++)
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                ans += (i+1)*(n-i);
        cout<<ans<<"\n";
        
    }

        
    

    
    
       
}