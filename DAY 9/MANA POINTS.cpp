#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int x,y,a;
	for(int i=0;i<n;i++)
	{
	        cin>>x,y;
	        a=y/x;
	        if(a>0)
	        cout<<a<<endl;
	        else
	        cout<<0<<endl;
	}
	return 0;
}
