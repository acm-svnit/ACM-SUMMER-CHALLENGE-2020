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
    ll i,j,n,m,u,v;
    cin>>n>>m;
    vector<vector<ll>>g(n+1);
    vector<bool>vis(n+1);
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    priority_queue<ll,vector<ll>,greater<ll> > pq;
    pq.push(1);
    vis[1]=1;
    while(!pq.empty())
    {
        ll f=pq.top();
        cout<<f<<" ";
        pq.pop();
        for(i=0;i<g[f].size();i++)
            if(!vis[g[f][i]])
            {
                pq.push(g[f][i]);
                vis[g[f][i]]=1;
            }
    }
    
        
 
        
 
 
 
    
 
}