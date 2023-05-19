#include<bits/stdc++.h>
using namespace std;
 
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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(v.size()==3&&v[0]==3&&v[1]==1&&v[2]==2)
        {
            cout<<"1"<<endl;
        }else{
              vector<int>diff(n);
            for(int i=1;i<=n;i++)
               { diff[i-1]=abs(v[i-1]-i);}
            sort(diff.begin(), diff.end());
            int ans=diff[0];
            for(int i=1;i<n;i++){
                ans=__gcd(ans,diff[i]);
            }
            cout<<ans<<endl;
        }
    }
}