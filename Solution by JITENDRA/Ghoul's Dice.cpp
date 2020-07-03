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
    ll i,j,n,a;
    t()
    {
        cin>>n;
        if(n>18 && n%18>1 && n%18<8) cout<<"YES\n";
        else cout<<"NO\n";
    }

}