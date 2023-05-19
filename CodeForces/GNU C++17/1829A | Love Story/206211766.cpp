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
    string p="codeforces";
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<10;i++)
        {
            if(s[i]!=p[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}