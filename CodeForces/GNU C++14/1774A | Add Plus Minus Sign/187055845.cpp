#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,st;
        cin>>s;
       int c=0;
            if(s[0]=='1')
            {
                c++;
            }
        for(int i=1;i<n;i++)
        {
            
            if(s[i]=='1')
            {
                c++;
                if(c%2==0)
                {
                    st=st+'-';
                }
                else{
                    st=st+'+';
                }
                
            }else{
                st=st+'+';
            }
                
        }
        cout<<st<<endl;
    }
    
}