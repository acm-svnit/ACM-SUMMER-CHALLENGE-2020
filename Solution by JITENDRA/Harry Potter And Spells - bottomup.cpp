#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define MOD ll(1e9L+7)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 

int main()
{
    fastio;
    ll i,n;
    cin>>n;
    vector<ll>a(n);
    vector<vector<ll>>dp(n,vector<ll>(2));
    //dp[i][j] = max sum from index i to n-1 if chagne element at index i or not
    for(i=0;i<n;i++) cin>>a[i];
    dp[n-1][0]=a[n-1];
    dp[n-1][1]=-a[n-1];
    for(i=n-2;i>0;i--)
    {
        dp[i][0] = max(dp[i+1][0]+a[i] , dp[i+1][1]-a[i]);
        dp[i][1] = max(dp[i+1][0]-a[i] , dp[i+1][1]+a[i]);
    }
    cout<<max(dp[1][0]+a[0],dp[1][1]-a[0]);

}