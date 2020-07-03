#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;

int main()
{
    ll n,i,a,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll c=0;
        vector<ll>s;
        for(i=0;i<n;i++)
        {
            cin>>a;
            auto it=upper_bound(s.begin(),s.end(),a);
            c += s.end()-it;
            s.insert(it,a);
            
        }
        cout<<c<<'\n';
    }
}