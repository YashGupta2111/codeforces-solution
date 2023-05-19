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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        sort(v.begin(),v.end());
        vector<int>p(n+1,0),s(n+1,0);
        p[0]=0;
        for(int i=1;i<=n;i++)
        {
            p[i]=p[i-1]+v[i-1];
        }
        reverse(v.begin(),v.end());
        s[0]=0;
        for(int i=1;i<=n;i++)
        {
            s[i]=s[i-1]+v[i-1];
        }
        int m=0;
        for(int i=0;i<=k;i++)
        {
            int left=p[2*i];
            int right=s[k-i];
            m=max(m,sum-left-right);
        }
        cout<<m<<endl;
    }
}