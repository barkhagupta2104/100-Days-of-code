    vector<int> findDuplicates(vector<int>& nums) {
        int len=nums.size();
        vector<int> ans;
          sort(nums.begin(), nums.end());
    for(int i=0,k=0;i<len-1;i++)
    {
        if(nums[i]==nums[i+1])
        ans.push_back(nums[i]);
        
    }
     
      return ans; 
        
    }
