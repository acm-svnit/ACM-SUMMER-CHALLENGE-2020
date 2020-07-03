#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>a(n),b(n),c(n);
        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;
        for(auto &it:c) cin>>it;
        ll ans=0;
        for(i=0;i<n;i++)
            ans += max(0LL,a[i]+b[i]-c[i]);
        cout<<ans<<"\n";
    }
}