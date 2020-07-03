#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 

ll C3=3,C2=2,C1=1;
struct mycomp{
    bool operator() (const ll &a,const ll &b) const{
        if(a%C3==0){
        if(b%C3==0) return a<b;
        else return true;
    }
    if(a%C2==0){
        if(b%C3==0) return false;
        else if(b%C2==0) return a<b;
        else return true;
    }
        if(b%C3==0 || b%C2==0) return false;
        else  return a<b;
    }

};

int main()
{
    fastio;
    set<ll,mycomp>s;
    vector<ll>v;
    ll n,i,x,q,y,ans=0,z;
    ll alice=0,bob=0,tie=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(!s.count(x))
            v.push_back(x);
        s.insert(x);
    }
    n=s.size();
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        x = *s.begin();
        s.erase(s.begin());
        y = v[i];
        if(x<y) bob++;
        else if(x>y) alice++;
        else tie++; 
    }
    cout<<alice<<" "<<bob<<" "<<tie;



}