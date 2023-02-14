 int singleNonDuplicate(vector<int>& nums) 
    {
        int i;
        for(i=0;i<nums.size()-1;i++)
        {
              if(nums[i]==nums[i+1])
               i++;
               else
              return nums[i];
              
        }
        return nums[i];
    }
