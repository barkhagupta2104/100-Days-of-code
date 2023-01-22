#include<iostream>

 using namespace std;
 
 int main()
 {
     int n;
     cin>>n;
     
     int arr[n];
     long int b,w,bc,wc,z;
     
     for(int i=0;i<n;i++)
     {
         cin>>b>>w;
         cin>>bc>>wc>>z;
         
         if(bc==wc)
         cout<<b*bc+wc*w<<endl;
         
         else
         {
            if(bc>wc&&bc>=z)
            {
                if(wc+z<bc)
                bc=wc+z;
                 cout<<b*bc+wc*w<<endl;
            } 
            
            else if(bc<wc&&wc>=z)
            {
                if(bc+z<wc)
                wc=bc+z;
                 cout<<b*bc+wc*w<<endl;      
            }
            else if(bc<z&&wc<z)
            
            cout<<b*bc+wc*w<<endl;
         }
     }
 }
