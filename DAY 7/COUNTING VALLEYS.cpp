#include <bits/stdc++.h>

using namespace std;
 int main()
 {
 int count=0,flag=0;
 int n;
 cin>>n;
 char arr[n];
 cin>>arr;
 for(int i=0;i<n;i++)
 {
     if(arr[i]=='U')
     count++;
      if(arr[i]=='D')
     count--;
      if(arr[i]=='U'&&count==0)
     flag++;
     
 }
cout<<flag;
    return 0;
}
