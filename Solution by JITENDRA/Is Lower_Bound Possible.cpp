#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 

int main()
{
    fastio;
    ll n,i;
    vector<ll>dp;
    for(i=1;i<=3*1e18L;i*=3) dp.push_back(i);
    t()
    {
        cin>>n;
        vector<ll>a(40);
        for(i=0;i<40;i++){
            a[i]=n%3;
            n /= 3;
        }
        ll first2=-1;
        for(i=39;i>=0;i--){
            if(a[i]==2){
                first2=i;
                break;
            }
        }
        if(first2!=-1)
        {
            for(i=first2+1;i<40;i++){
                if(a[i]==0){
                     a[i]=1;
                     break;
                }
                else a[i]=0;
            }
            for(i=first2;i>=0;i--) a[i]=0;
        }
        ll ans=0;
        for(i=0;i<40;i++) if(a[i]) ans+=dp[i];
        cout<<ans<<"\n";


    }
}