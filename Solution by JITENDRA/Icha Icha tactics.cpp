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
        stack<char>st;
        bool f=true;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='{')
                st.push('{');
            else if(s[i]=='1')
                st.push('1');
            else{
                if(!st.empty() && st.top()=='1')   st.pop();
                else {
                    f=false;
                    break;
                }
                if(!st.empty() && st.top()=='{') st.pop();
                else {
                    f=false;
                    break;
                }
            }
        }
        if(st.empty() && f) cout<<"Yes\n";
        else cout<<"No\n";
    }


}