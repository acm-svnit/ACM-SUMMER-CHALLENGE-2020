#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll t;cin>>t;while(t--) 

int main()
{
    ll t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<ll>a(n);
        ll s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            for(j=i-1;j>=0;j--)
            {
                if(a[j+1]<a[j]) {
                    swap(a[j],a[j+1]);
                    s++;
                }
                else break;
            }
        }
        if(s<=k) cout<<"YES\n";
        else cout<<"NO\n";
    }

    
}