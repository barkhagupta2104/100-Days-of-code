vector<int> separateDigits(vector<int>& nums) {
            
        vector<int>ans;
        int i,c,j;
        for(i=0;i<nums.size();i++)
        {
            vector<int>t;
            c=nums[i];
            while(c>0)
            {
                t.push_back(c%10);
                c=c/10;
            }
            for(j=t.size()-1;j>=0;j--)
            {
                ans.push_back(t[j]);
            }
        }
        return ans;
        
