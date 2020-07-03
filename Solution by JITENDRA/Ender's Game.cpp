#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 
const ll infinity=106;
const ll MAXA = 100;
ll a[10002],has[101][10002]; 
int main()
{
    fastio;
    freopen("a.in","r",stdin);
    freopen("a.out","w",stdout);
    ll n,i,j,x;
    t()
    {
        cin>>n;
        for(i=1;i<=n;i++) cin>>a[i];
        a[n+1]=infinity;
        for(i=0;i<=MAXA;i++)
        {
            has[i][n+1]=infinity;
            has[i][n]=n+1;
        }
        
        for(j=n-1;j>=0;j--)
            for(i=0;i<=MAXA;i++)
                has[i][j]= a[j+1]==i ? j+1 : has[i][j+1] ;
        
        ll elementcounted=0,ans=1;
        ll curind=0;
        for(i=1;i<=n;i++) cin>>a[i];
        bool f=1;
        for(i=1;i<=n;)
        {
            x = has[a[i]][curind];
            if(curind==0 && x==n+1) {
                f=0;
                break;
            }
            if(x==n+1){
                ans++;
                curind=0;
            }
            else{
                i++;
                curind=x;
            } 
        }
        if(f) cout<<ans<<"\n";
        else cout<<"-10099\n";

    }

}