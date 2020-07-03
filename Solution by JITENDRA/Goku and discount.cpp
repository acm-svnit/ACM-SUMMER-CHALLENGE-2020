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
    ll n,i;
    cin>>n;
    vector<ll>a(n);
    for(auto &it:a) cin>>it;
    sort(a.begin(),a.end());
    ll sum=0;
    ll ans=0;
    for(i=0;i<n;i++)
        if(a[i]>=sum) ans++,sum += a[i];
    cout<<ans;

    
}