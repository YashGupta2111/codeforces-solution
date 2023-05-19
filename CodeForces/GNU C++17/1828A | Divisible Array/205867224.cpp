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
        cin >> n;
           vector<int>v(n);
           int sum=0;
           for(int i=1;i<n;++i){
            sum=sum+i+1;
            v[i]=i+1;
           }
           v[0]=n-sum%n;
           for(int it:v)
           {
            cout<<it<<' ';            
            }
            cout<<endl;
    }
 
 
}
 
    