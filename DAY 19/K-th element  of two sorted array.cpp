int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
         vector<int> g;
         
           
         for(int i=0;i<n;i++)
         {
             g.push_back(arr1[i]);
            
             
         }
          for(int i=0;i<m;i++)
           g.push_back(arr2[i]);
         sort (g.begin(),g.end());
         
              return g[k-1];
