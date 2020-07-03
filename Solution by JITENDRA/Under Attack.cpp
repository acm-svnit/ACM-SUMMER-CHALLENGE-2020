#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define t() ll t;cin>>t;while(t--) 

int main()
{ 
    fastio
    int i,n,m,j,b,a[1000][1000];
    t()
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>a[i][j];
        ll ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                ll mx=a[i][j];
                for(ll p=-1;p<=1;p++)
                    for(ll q=-1;q<=1;q++)
                        if(i+p>=0 && i+p<n && j+q>=0 && j+q<m)
                            mx=max(mx,(ll)a[i+p][j+q]);
                if(mx<=a[i][j]) ans+=a[i][j];
            }
        }
        cout<<ans<<"\n";
       
    }
}