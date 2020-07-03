#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define MOD ll(1e9L+7)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 

const ll sz=1e6L+1L;
ll lpf[sz];//lowest prime factor
void lpfsieve()
{
    for(ll i=1;i<sz;i++) lpf[i]=i;
    for(ll i=2;i*i<sz;i++)
        if(lpf[i]==i){
            for(ll j=i*i;j<sz;j+=i)
            if(lpf[j]==j)
                lpf[j]=i;
        }
}

int main()
{
    fastio;
    lpfsieve();
    ll n,ans;
    t()
    {
        cin>>n;
        ans=0;
        while(n>1){
            n /= lpf[n];
            ans++;
        }
        cout<<ans<<"\n";
    }
}