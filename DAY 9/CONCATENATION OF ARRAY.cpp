/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int *ans;
    ans=(int*)malloc(2*numsSize*sizeof(int));
        for(int i=0;i<ans;i++)
    {
        if(2==i/numsSize)
        break;
        ans[i]=nums[i%numsSize];
        
    }
    *returnSize=2*numsSize;
return ans;
