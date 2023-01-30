void rotate(int* nums, int numsSize, int k){
    int ans[numsSize];
    
                for(int i=0;i<numsSize;i++)
        {
            ans[(i+k)%numsSize]=nums[i];
        }
         for(int i=0;i<numsSize;i++)
         {
             nums[i]=ans[i];
         }
}
