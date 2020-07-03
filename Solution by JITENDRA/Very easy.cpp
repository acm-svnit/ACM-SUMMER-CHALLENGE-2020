#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define MOD ll(1e9L+7)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 
 
vector<vector<ll>>g;
ll zero=0,one=0;
void dfs(ll s,bool c,ll p)
{
    if(!c) zero++;
    else one++;
    for(auto to:g[s])
        if(to!=p)
            dfs(to,!c,s);
} 
int main()
{
    fastio;
    ll n,i,u,v;
    cin>>n;
    g.resize(n+1);
    
    for(i=0;i<n-1;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    if(n==1) cout<<"1\n1";
    else{
        dfs(1,0,1);
        cout<<"2\n";
        cout<<zero<<" "<<one;

    }
    
        
 
        
 
 
 
    
 
}