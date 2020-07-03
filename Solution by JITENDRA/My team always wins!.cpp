#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define t() ll t;cin>>t;while(t--) 

int main()
{ 
    ll i,j,k,n;
	cin>>n>>k;
	vector<ll>a(n),b(n);
	for(ll &it:a) cin>>it;
	for(ll &it:b) cin>>it;
	ll ans=0;
	for(i=0;i<n;i++) if(b[i]) ans+=a[i];
	ll slide=0;
	ll temp=0;
	for(i=0;i<k;i++) if(!b[i]) slide += a[i];
	temp=slide;
	for(i=k;i<n;i++)
	{
		if(!b[i]) slide += a[i];
		if(!b[i-k]) slide -= a[i-k];
		temp=max(temp,slide);
	}
	cout<<temp+ans;
    
}