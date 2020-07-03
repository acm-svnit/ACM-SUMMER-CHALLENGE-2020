#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define MOD ll(1e9L+7)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 
const ll inf = -1e15;
ll a[100001],n;
ll dp[100001][2];

ll solve(ll ind,bool change)
{
    if(dp[ind][change]!=inf)
        return dp[ind][change]; 
    ll x = change ? -a[ind] : a[ind];
    ll ans;
    if(ind==n-1) ans= x;
    else ans =  max(solve(ind+1,1)-x,solve(ind+1,0)+x);
    return dp[ind][change]=ans;
}

int main()
{
    fastio;
    ll i;
    for(i=0;i<100001;i++) dp[i][0]=dp[i][1]=inf;
    
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    ll p=solve(1,0)+a[0];
    ll q=solve(1,1)-a[0];
    cout<<max(p,q);

}