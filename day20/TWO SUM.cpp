vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        vector <int> h;
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                h.push_back(i);
                 h.push_back(j);
                }
            }
        }
        return h;
