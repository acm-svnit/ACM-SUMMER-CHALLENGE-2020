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

    ll n,i,j;
    string s;
    cin>>s;
    vector<ll>freq(26,0);
    for(i=0;i<s.length();i++)
        freq[s[i]-'a']++;
    stack<char>p;
    string ans="";
    for(i=0;i<s.length();i++)
    {
        p.push(s[i]);
        freq[s[i]-'a']--;
        while(!p.empty())
        {
            bool found=false; 
            for(j=p.top()-'a'-1;j>=0;j--)
                if(freq[j]) found=true;
            if(!found){
                ans += p.top();
                p.pop();
            }
            else break;
        }
    }
    cout<<ans;



}