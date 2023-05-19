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
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        bool r=false;
         char p=(char)(d);
          for (int i = 0; i < n; i++) {
            if (s[i] - '0' < d) {
                s.insert(i, to_string(d));
                r = true;
                break;
            }
         }
         if(r==false){
            s=s+to_string(d);
         }
         cout<<s<<endl;
 
       
    }
}