#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define MOD ll(1e9L+7)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 

ll modularexponentiation(ll x,ll n,ll M) //iterative method
{
    ll ans=1;
    while(n>0)
    {
        if(n%2==1)
         ans=(ans*x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return ans;
}


int main()
{
    fastio;
    ll n,a,b,sum;
    t()
    {
        cin>>n;
        if(n<10) sum=-1;
        else {
            b=n%10;
            n/=10;
            a=n;
            sum=modularexponentiation(a+1,b,MOD) * modularexponentiation(a,10-b,MOD);
            sum = (sum%MOD);
        }
        cout<<sum<<"\n";
    }
    
    

    
}