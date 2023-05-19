#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=0;
        int a[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=4;i++)
        { if(a[0][0]<a[0][1]&&a[1][0]<a[1][1]&&a[0][0]<a[1][0]&&a[0][1]<a[1][1])
         {
           n++;
           break;
         }
         else{
               int temp=a[0][0];
               a[0][0]=a[1][0];
               a[1][0]=a[1][1];
               a[1][1]=a[0][1];
               a[0][1]=temp;
         
         }
      }
        if(n>0)
         {
            cout<<"YES"<<endl;
         }
         else{cout<<"NO"<<endl;
         }
         
}
}
 