class Solution {
public:
    string reverseVowels(string s) 
    {
        int c=0;
        string flag,h;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u' || s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                c++;
                flag.push_back(s[i]);
            }
        }
        int l=c-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u' && s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
            {
               h.push_back(s[i]);
            }
            else{
                h.push_back(flag[l]);
                l--;
            }
        }
        return h;
    }
};
