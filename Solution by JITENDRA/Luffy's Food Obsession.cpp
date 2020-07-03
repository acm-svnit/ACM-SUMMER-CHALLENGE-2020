#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
int main()
{
    ll t,n,m,a[100000],i,j;
    cin>>t;
    while (t--)
    {
        ll cnt[64]={},sum=0;
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            sum+=a[i];
            for(j=0;j<60;j++)
                if(a[i]&(1LL<<j))
                    cnt[j]++;
        }
        if(sum<n)
        {
            cout<<-1<<endl;
            continue;
        }
        ll ans=0;
        for(j=0;j<60;j++)
        {
            if(n&(1LL<<j))
            {
                if(cnt[j])
                    cnt[j]--;
                else
                {
                    while(j<60 && cnt[j]==0)
                    {
                        j++;
                        ans++;
                    }
                    cnt[j]--;
                    j--;
                    continue;
                }
            }
            cnt[j+1]+=cnt[j]/2;            
        }
        cout<<ans<<endl;
        
    }
    
}