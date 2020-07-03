#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 
const double EPS = 1e-9;

int main()
{ 
    string s;
    fastio;
    t()
    {
        cin>>s;
        vector<pair<string,bool>>ans;
        string curr="";
        bool flag=true;
        for(ll i=1;i<s.length();i++)
        {
            if(s[i]!='/')
                curr += s[i];
            else{
                if(curr!="")
                    ans.push_back({curr,true});
                curr = "";
            } 
        }
        ll c=0;
        for(ll i=1;i<s.length();i++)
        {
            if(s[i]=='/')
            {
                if(s[i-1]=='/')
                {
                     ans[c].second=false;
                     if(c>0)
                     ans[c-1].second=false;
                }
                else c++;
            }
        }
        c=0;
        for(ll i=0;i<ans.size();i++) if(ans[i].second)c++;
        cout<<c<<"\n";
        for(ll i=0;i<ans.size();i++) if(ans[i].second)cout<<ans[i].first<<"\n";
        

    }

        
    

    
    
       
}