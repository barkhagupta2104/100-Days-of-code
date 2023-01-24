#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k=0,flag=0;
    cin>>n;
    int arr[n];
    int num=1000;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
            if(num>(j-i))
            num=(j-i);
            
            flag=1;
            }
        }
    }

    if(flag==1)
    cout<<num;
    else 
    cout<<-1;

return 0;

}
