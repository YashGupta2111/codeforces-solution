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
        string s;
        cin>>s;
        unordered_map<char,int>m;
        for(int i=0;i<s.size()/2;i++)
        {
            m[s[i]]++;
        }
        
        
        if (m.size()>=2) {
            cout << "YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}