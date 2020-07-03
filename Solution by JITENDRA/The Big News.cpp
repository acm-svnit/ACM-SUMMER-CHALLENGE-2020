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
    ll i,j,n,m,k,u,v;
    cin>>n>>m;
    vector<vector<ll>>g(n+1);
    for(i=0;i<m;i++)
    {
        cin>>k;
        cin>>u;
        for(j=1;j<k;j++)
        {
            cin>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
    }
    vector<ll>component(n+1,-1);
    vector<ll>count(n+1);
    ll c=1;
    for(i=1;i<=n;i++)
    {
        if(component[i]==-1)
        {
            queue<ll>bfs;
            bfs.push(i);
            component[i]=c;
            count[c]++;
            while(!bfs.empty())
            {
                ll f=bfs.front();
                bfs.pop();
                for(j=0;j<g[f].size();j++)
                    if(component[g[f][j]]==-1)
                    {
                        bfs.push(g[f][j]);
                        component[g[f][j]]=c;
                        count[c]++;
                    }
            }
            c++;
        }
    }
    for(i=1;i<=n;i++)
        cout<<count[component[i]]<<" ";
    
}