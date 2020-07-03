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
    ll n,m,i,j,ty,x,a,q;
    cin>>n>>m>>q;
    vector<pll>row(n,{0,INT_MAX}),col(m,{0,INT_MAX});
    while(q--)
    {
        cin>>ty>>x>>a;
        if(ty==1)
            row[x-1]={a,q};
        else 
            col[x-1]={a,q};
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(row[i].second<col[j].second)
                cout<<row[i].first<<" ";
            else 
                cout<<col[j].first<<" ";
        }
        cout<<"\n";
    }
    



}