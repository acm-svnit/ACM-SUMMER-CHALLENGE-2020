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
    ll i,ans;
    string s;
    t()
    {
        cin>>s;
        bool f=true;
        while(!s.empty())
        {
            size_t pos = s.find("{1}");
            if(pos==string::npos)
            {
                f=false;
                break;
            }
            else
                s.erase(pos,3);
        }
        if(f) cout<<"Yes\n";
        else cout<<"No\n";
    }


}