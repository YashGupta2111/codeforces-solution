#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long int 
#define sortv(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<int>())
#define ub(v, idx, val) upper_bound(v.begin() + idx, v.end(), val)
#define lb(v, idx, val) lower_bound(v.begin() + idx, v.end(), val)
#define f first
#define s second
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
          m[s[i]]++;
        }
        vector<char>ch;
        for(auto it:m)
        {
            if(it.second>1)
            { ch.push_back(it.f);}
        }
        if(ch.empty())
        { cout<<"YES\n";}
        else
        {
              int r;bool out=true;
            for(int i=0;i<ch.size();i++)
            {    int count=0;
            int even=0;
            int odd=0;
                for(int j=0;j<s.size();j++)
                 {
                    if(s[j]==ch[i])
                    {
                       if(count==0) 
                       {
                         if(j%2==0)
                         {
                            even++;
                         }else
                         {
                            odd++;
                         }
                         count++;
                       }else
                       {
                        if(even>0)
                        {
                          if(j%2==1)
                          {
                            out=false;
                          }
                        }else
                        {
                            if(j%2==0)
                            {
                                out=false;
                            }
                        }
                       }
 
                    }
                 }
            }
            if(out)
            {
                cout<<"YES\n";
            }else
            {
                cout<<"NO\n";
            }
        }
 
    }}
    