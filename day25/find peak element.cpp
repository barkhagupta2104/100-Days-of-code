    int findPeakElement(vector<int>& nums) 
    { int big=nums[0],ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>big)
            {
            big=nums[i];
            ind=i;
            }
        }
        return ind;
    }
