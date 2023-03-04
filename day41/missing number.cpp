    int missingNumber(vector<int>& nums) {
        int num=-1;
    sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++)
        {
        if(i!=nums[i])
        {
            num=i;
            break;
        }
       }
       if(num==-1)
       return nums.size();
       else
    return num;
    }
