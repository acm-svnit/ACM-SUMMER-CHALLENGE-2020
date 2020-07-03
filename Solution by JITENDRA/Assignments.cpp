#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll t;cin>>t;while(t--) 

int main()
{ 
    // fastio;
    ll n,m,i,j;
    cin>>n>>m;
    vector<ll>a(n);
    for(auto &it:a) cin>>it;

    ll l=1,r=1e7;
    ll ans=1e7;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        ll s=0;
        for(i=0;i<n;i++) s+= mid/a[i];
        if(s>=m) ans=mid,r=mid-1;
        else l = mid+1;
    }  
    cout<<ans;
}