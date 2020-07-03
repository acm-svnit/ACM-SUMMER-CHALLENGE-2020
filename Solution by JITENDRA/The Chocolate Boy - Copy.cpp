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
    ll i,j,k,n,w,x,y,ans=0;
    string s;
    cin>>n>>w;
    vector<ll>val,wei;
    for(i=0;i<n;i++)
    {
        cin>>s;
        cin>>s;
        cin>>x>>y;
        if(s=="S"){
            wei.push_back(x);
            val.push_back(y);
        }
    }
    n=val.size();
    //dp[i][j][k] = till index i , maximum value you can get by using atmost j weight where k items being halved
    // dp[i][j][0] = dp[i-1][j-wei[i]][0]+val[i] , dp[i-1][j][0]
    // dp[i][j][1] = dp[i-1][j-wei[i]][1]+val[i] , dp[i-1][j][1] ,
    //               dp[i-1][j-wei[i]/2][0]+val[i]   
    ll dp[1005][1005][2];

    for(i=0;i<wei[0];i++) dp[i][j][0]=dp[i][j][1]=0;
    for( ;i<=w;i++) dp[i][j][0]=val[0],dp[i][j][1]=val[0]/2;

    for(i=1;i<n;i++)
    {
        for(j=0;j<=w;j++)
        {
            dp[i][j][0]=dp[i-1][j][0];
            if(j>=wei[i]) dp[i][j][0] = max(dp[i][j][0],dp[i-1][j-wei[i]][0]+val[i]);

            dp[i][j][1]=dp[i-1][j][1];
            if(j>=wei[i]) dp[i][j][1] = max( dp[i][j][1] , dp[i-1][j-wei[i]][1]+val[i] );
            if(j>=wei[i]/2) dp[i][j][1] = max( dp[i][j][1] , dp[i-1][j-wei[i]/2][0]+val[i] );
        }
    }
    cout<<max(dp[n-1][w][1],dp[n-1][w][0]);


}