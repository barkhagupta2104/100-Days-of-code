class Solution {
public:
int diff=0;

    int maximumGap(vector<int>& nums) 
    {
         sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
       if(diff<nums[i+1]-nums[i])
       diff=nums[i+1]-nums[i];
        }
        return diff;
    }

};
