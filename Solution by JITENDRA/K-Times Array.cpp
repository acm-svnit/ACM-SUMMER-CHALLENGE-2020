#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define t() ll t;cin>>t;while(t--) 
#define Mod 1000000007
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
ll modInverse(ll A,ll M)//Fermat's Little Theorem
{
    ll x= modularexponentiation(A,M-2,M);
    return x;
}
int main()
{ 
    ll n,k,i,j;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll &it:a) cin>>it;
    ll ans=0;
    for(i=0;i<n;i++){
        ll x=0;
        for(j=i+1;j<n;j++)
            if(a[j]<a[i]) x++;
        ll y=0;
        for(j=0;j<n;j++)
            if(a[j]<a[i]) y++;
        // ans += ( k*x + y*k*(k-1)/2  )
        ans = (ans + k*x)%Mod;
        ans = ( ans + ((((k*(k-1))%Mod)*y)%Mod * modInverse(2,Mod))%Mod )%Mod;
        // ans = ( ans + (((k*(k-1)/2)%Mod)*y)%Mod %Mod )%Mod;  // true as /2 is in range of long
    }
    cout<<ans;
}