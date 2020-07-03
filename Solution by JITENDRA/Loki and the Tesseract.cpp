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
    ll i,j,n,m;
    bool p;

    cin>>n>>m;
    vector<vector<ll>>a(n,vector<ll>(m));
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            cin>>p;
            if(p) a[i][j]=0;
            else {
                if(i>0) a[i][j] =  a[i-1][j] ;
                if(j>0) a[i][j] = max(a[i][j],a[i][j-1]);
                a[i][j]++;
            }
        }
    ll ans=0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++) ans=max(ans,a[i][j]);
    cout<<ans;

    




}