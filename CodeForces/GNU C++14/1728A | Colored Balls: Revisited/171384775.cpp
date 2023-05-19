#include<iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int m=0;
        int t;
        for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        if(m<arr[i])
            {
                m=arr[i];
                t=i; 
                           }
        }
        
        cout<<(t+1)<<endl;
       
 
    }
 
    
    return 0;
 
}