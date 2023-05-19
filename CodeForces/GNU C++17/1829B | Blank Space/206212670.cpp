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
        cin>>n;vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int>V1;
        int count=0;
        for(int i=0;i<n;i++)
        {
            count=0;
            if(v[i]==0)
            {  
               for(int j=i;j<n;j++){
                if(v[j]==1)
                {
                   break;
                }
                else
                {
                    count++;
                }
               }
               V1.push_back(count);
            }
        }
        if(V1.size()!=0)
        {
            cout<<*max_element(V1.begin(),V1.end())<<endl;
        }else
        {
            cout<<"0"<<endl;
        }
    }
}