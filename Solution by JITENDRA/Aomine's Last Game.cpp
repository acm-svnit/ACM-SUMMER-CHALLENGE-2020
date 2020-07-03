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
vector<bool>tochanged;
vector<ll>visited;
vector<ll>ans;

void dfs(ll s,bool even,bool odd,ll cur_level)
{
    visited[s]=true;
    if(cur_level%2==0 && even) tochanged[s]= !tochanged[s];
    if(cur_level%2!=0 && odd) tochanged[s]= !tochanged[s];

    if(cur_level%2==0 && tochanged[s]) even = !even ,ans.push_back(s);
    if(cur_level%2!=0 && tochanged[s]) odd = !odd , ans.push_back(s);
    for(auto to:g[s])
        if(!visited[to])
            dfs(to,even,odd,cur_level+1);
}
int main()
{
    ll i,j,n,m,k,u,v;
    cin>>n;
    
    g.resize(n+1);
    tochanged.resize(n+1,0);
    visited.resize(n+1,0);
    vector<ll>initial(n+1);
    for(i=1;i<n;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(i=1;i<=n;i++) cin>>initial[i];
    for(i=1;i<=n;i++) {
        cin>>u;
        if(u!=initial[i]) tochanged[i]=true;
    }
    dfs(1,0,0,0);
    cout<<ans.size()<<"\n";
    sort(ans.begin(),ans.end());
    for(auto it:ans) cout<<it<<"\n";
   


}