#include <iostream>
using namespace std;

int main() {
	
	int T,count=0,i,j;
	cin>>T;
	string s;
	for(i=0;i<T;i++)
	{
	        count=0;
	    cin>>s;
	    	for( j=0;s[j]!=0;j++)
	    	{
	    if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
	    {
	   count++;
	   if(count==3)
	   break;
	    }  
	    else
             count=0;
             
	    	}
	    	
	    if(count>=3)
	    cout<<"happy"<<endl;
	    else
	    cout<<"sad"<<endl;
	}
	
		return 0;
}
