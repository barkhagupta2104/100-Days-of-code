class Solution {
public:
    string truncateSentence(string s, int k) 
    { 
        int cnt=0;
        string c="";
        for(int i=0;s[i]!=0;i++)
        {
            if(s[i]==32)
             {  
              cnt++;
              if(cnt==k)
              break;
             }
                c+=s[i];
        }
      
        return c;
     
    }
};
