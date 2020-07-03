#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
const double EPS = 1e-9;
int main()
{
    ll t,i;
    double x,y,a;
    cin>>t;
    while(t--){
        cin>>x>>y>>a;
        double ans=abs(x*x - 4*a*y);
        if(ans<EPS) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}