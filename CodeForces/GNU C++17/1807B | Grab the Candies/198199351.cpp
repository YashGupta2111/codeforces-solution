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
        int a[n];
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
          if(a[i]%2==0)
          {
            even=even+a[i];
          }else
          {
            odd=odd+a[i];
          }
        }
        if(even>odd)
        {
            cout<<"Yes\n";
        }else
        {
            cout<<"NO\n";
        }
    }
    }