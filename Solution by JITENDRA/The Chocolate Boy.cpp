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
    ll i,j,k,n,w,x,y;
    string s;
    cin>>n>>w;
    vector<ll>weight,value;
    for(i=0;i<n;i++)
    {
        cin>>s>>s;
        cin>>x>>y;
        if(s=="S")
        {
            weight.push_back(x);
            value.push_back(y);
        }
    }
    n=weight.size();
    //error on vector of size n*(w+5)
    vector<vector<ll>>dp(n,vector<ll>(1005));
    //dp[i][j] = max value till index i using atmost j weight
    
    for(i=0;i<weight[0];i++) dp[0][i]=0;
    for( ; i<=w;i++) dp[0][i] = value[0];
    for(i=1;i<n;i++)
    {
        for(j=0;j<=w;j++)
        {
            if(j>=weight[i])
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-weight[i]]+value[i]);
            else 
                dp[i][j] = dp[i-1][j];
        }
    }
    ll ans=dp[n-1][w];
    for(k=0;k<n;k++)
    {
        ll temp = weight[k];
        weight[k] /= 2;
        
        for(i=0;i<weight[0];i++) dp[0][i]=0;
        for( ; i<=w;i++) dp[0][i] = value[0];
        for(i=1;i<n;i++)
        {
            for(j=0;j<=w;j++)
            {
                if(j>=weight[i])
                    dp[i][j] = max(dp[i-1][j],dp[i-1][j-weight[i]]+value[i]);
                else 
                    dp[i][j] = dp[i-1][j];
            }
        }
        ans = max(ans,dp[n-1][w]);
        weight[k]=temp;
    }
    cout<<ans;
    
       
}
