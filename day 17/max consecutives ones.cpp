int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
                  if(nums[i]==1) count++;
                  else count=0;
                 maxCount=max(maxCount,count);
        }
        return maxCount;
    }
