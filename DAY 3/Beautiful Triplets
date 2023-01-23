#include <bits/stdc++.h>
  
using namespace std;

int main()
{
    int n,d,g;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    
    int count=0,flag=0;
    for(int i=0;i<n;i++)
    {
        g=arr[i];
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if((g+d)==arr[j])
            {
                count++;
                g=g+d;
            }
        }
        if(count>=3)
        {
            flag++;
        }
    }
    cout<<flag;
     
    
}
