/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *ans;
    ans=(int*)malloc(numsSize*sizeof(int));
    for(int i=0,j=0;i<n;i++)
    {
        ans[j]=nums[i];
        ans[j+1]=nums[i+n];
        j=j+2;
    }
*returnSize=numsSize;

return ans;
}
