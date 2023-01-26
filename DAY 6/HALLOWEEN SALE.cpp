#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,d,m,s,sum=0,count=-1;
    cin>>p>>d>>m>>s;
    p=p+d;
 while(sum<=s){
        
        p=p-d;
        if(p<m)
            p=m;
        sum+=p;
        count++;
    }
    cout<<count;
    return 0;
}
