#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        
        int j=0;
        sort(a.begin(),a.end());
        for(int i=n-1;i>=0;i--)
        {
            b[j]=a[i];
            j++;
        }
        if(m.size()==1)
        {
        cout<<"NO"<<endl;
        }
        else{
            int x;
            cout<<"YES"<<endl;
            for(auto it:m)
            {
                if(it.second>1)
                {
                    x=it.first;
                }
            }
            if(x==0)
            {
               for(int i=0;i<n;i++)
            {
               cout<<b[i]<<" ";
            }
            cout<<endl;  
            }
            else
                {
                if(b[0]!=b[1])
                {
                    for(int i=0;i<n;i++)
                      {
               cout<<b[i]<<" ";
                        }
                       cout<<endl;  
                    }
                
                else{
                    int temp=b[0];
                    b[0]=b[n-1];
                    b[n-1]=temp;
                    for(int i=0;i<n;i++)
                        {
                           cout<<b[i]<<" ";
                         }
                          cout<<endl;  
                        }
                }
            }
 
            
        }
 
    }