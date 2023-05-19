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
        int n,q;
        cin>>n>>q;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        vector<int>pre(n,0);
          pre[0]=a[0];
        for(int i=1; i<n; i++) {
            pre[i]=a[i]+pre[i-1];
            }
 
        for(int j=0;j<q;j++)
        {
            int l,r,k;
            cin>>l>>r>>k;
            int k2=pre[r-1]-(pre[l-1]-a[l-1]);
            int sum2=sum-k2+(r-l+1)*k;
            if(sum2%2==1)
            {
                cout<<"YES\n";
            }else
            {
                cout<<"NO\n";
            }
        }
    }
    }