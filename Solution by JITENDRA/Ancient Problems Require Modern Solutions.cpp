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
    map<ll,vector<ll>>mp;
    ll n,q,i,a,d,k,l,r,p1,q1;
    cin>>n>>q;
    for(i=0;i<n;i++){
        cin>>a;
        mp[a].push_back(i+1);
    }
    while(q--)
    {
        cin>>d>>k>>l>>r;
        l = lower_bound(mp[d].begin(),mp[d].end(),l)-mp[d].begin();
        r = upper_bound(mp[d].begin(),mp[d].end(),r)-mp[d].begin()-1;
        if(mp[d].size()<k || r-l+1<k)
            cout<<"-1\n";
        else 
            cout<<mp[d][l+k-1]<<"\n";
    }
}