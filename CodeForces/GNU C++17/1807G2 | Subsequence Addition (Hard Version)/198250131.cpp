#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long int 
#define sortv(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<int>())
#define ub(v, idx, val) upper_bound(v.begin() + idx, v.end(), val)
#define lb(v, idx, val) lower_bound(v.begin() + idx, v.end(), val)
#define f first
#define s second
void solve()
{
    int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
       sort(a,a+n);
       int sum=1;
       if(a[0]!=1)
       {
        cout<<"NO\n"; return ;
       }
       
        
        for(int i=1; i<n; i++){
        if(a[i] <= sum) { 
            sum += a[i];  
            continue;
        }
        else {
            cout<<"NO"<<endl;  
            return ;
        }
        
        
        }
        cout<<"YES\n";
}
 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }}