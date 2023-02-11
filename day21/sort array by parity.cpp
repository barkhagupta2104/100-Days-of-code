int* sortArrayByParityII(int* nums, int numsSize, int* returnSize){
     int *ans=(int *)malloc(numsSize*sizeof(int));
    int i,j=0,k=1;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]%2==0)
        {
            ans[j]=nums[i];
            j=j+2;
        }
        else
        {
            ans[k]=nums[i];
            k=k+2;
        }
    }
    *returnSize=numsSize;
    return ans;

}
