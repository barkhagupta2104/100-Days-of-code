#include <bits/stdc++.h>

using namespace std;
 
 int main()
 {
   
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }  
   int count=1,c=1;
   
  for(int i=0;i<n;i++)
   {
       count=1;
     for(int j=i+1;j<n;j++)
   {
    if(arr[i]==arr[j])
    
    count++;
   }
   if(c<count)
   c=count;
   }
   cout<<n-c;
    return 0;
}
