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
    ll i,j,n,m,q,z,l1,r1,l2,r2;
    cin>>n>>m>>q;
    vector<ll>a(n),b(m);
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while(q--)
    {
        cin>>z;
        l1=0,r1=n-1,l2=0,r2=m-1;
        char type;
        cin>>type;
        if(type=='A') {
            cin>>l1>>r1;
            l1 = lower_bound(a.begin(),a.end(),l1)-a.begin();
            r1 = upper_bound(a.begin(),a.end(),r1)-a.begin()-1;
        }
        else if(type=='B'){
            cin>>l2>>r2;
            l2 = lower_bound(b.begin(),b.end(),l2)-b.begin();
            r2 = upper_bound(b.begin(),b.end(),r2)-b.begin()-1;
        }
        else {
            cin>>l1>>r1;
            l1 = lower_bound(a.begin(),a.end(),l1)-a.begin();
            r1 = upper_bound(a.begin(),a.end(),r1)-a.begin()-1;
            cin>>l2>>r2;
            l2 = lower_bound(b.begin(),b.end(),l2)-b.begin();
            r2 = upper_bound(b.begin(),b.end(),r2)-b.begin()-1;
        }
        ll ans=0;
        ll right=r2;
        for(i=l1;i<=r1;i++){
            while(right>=l2 && a[i]+b[right]>z) right--;
            if(right<l2) break;
            ans += right-l2+1;
        }
        cout<<ans<<"\n";
    }
}