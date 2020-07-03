#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 

int main()
{
    ll n,i,j;
    string s;
    t()
    {
        cin>>n;
        vector<ll>a(n),len(n);
        for(i=0;i<n;i++){
            cin>>s;
            len[i]=s.length();
            for(j=0;j<s.length();j++){
                a[i] = a[i] | ( 1L<<(s[j]-'a') );
            }
        }
        ll ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                if((a[i]&a[j])==0) ans=max(ans,len[i]*len[j]);            
        }
        cout<<ans<<"\n";
    }
    

    
}