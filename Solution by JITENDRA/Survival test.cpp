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
    ll n,i,j,x,a,b;
    t()
    {
        cin>>n;
        priority_queue<ll> pq;
        for(i=0;i<n;i++)
        {
            cin>>a;
            pq.push(a);
        }
        while(pq.size()>1)
        {
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            if(a>b) pq.push(a-b);
            else if(a<b) pq.push(b-a);
        }
        if(pq.empty()) cout<<"-1\n";
        else cout<<pq.top()<<"\n";
        

    }



}