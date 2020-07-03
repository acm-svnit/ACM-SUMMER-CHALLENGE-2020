#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;

int main()
{
    ll t,n,i;
    vector<ll>dp;
    dp.push_back(1);
    dp.push_back(1);
    for(i=1;dp[i]<1e6;i++) dp.push_back(dp[i]+dp[i-1]);
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ans=0;
        while(n>0)
        {
            ll x = upper_bound(dp.begin(),dp.end(),n) - dp.begin();
            ans++;
            n -= dp[x-1];
        }
        cout<<ans<<"\n";
        

    }
   

}