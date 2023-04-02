class Solution {
public:
    int secondHighest(string s) 
    {
        int se_largest=-1;
        int largest=-1;
        for(int i=0;i<s.size();i++)
        {
             if(isdigit(s[i]))
             {
                 if(largest<s[i])
                 {
                 se_largest=largest;
                 largest=s[i];
                 }
             
             else if (s[i] < largest && s[i] > se_largest) {
                    se_largest = s[i];
                }
             }
        }
        if(se_largest==-1)
        return se_largest;
        else
        return se_largest-'0';
    }
};
