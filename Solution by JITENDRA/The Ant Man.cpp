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
    ll x,i,n,ans=0;;
    cin>>n;
    queue<ll>q;
    vector<bool>deleted(n+1,false);
    for(i=0;i<n;i++){
        cin>>x;
        q.push(x);
    }
    for(i=0;i<n;i++){
        cin>>x;
        while(deleted[q.front()]) q.pop();
        if(x!=q.front()) ans++;
        else q.pop();
        deleted[x]=true;
    }
    cout<<ans;


}