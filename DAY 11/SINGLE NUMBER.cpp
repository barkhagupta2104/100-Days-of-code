int singleNumber(int* nums, int numsSize){
    int i;
    int len=numsSize;
    int count=0,flag[len];
    for( i=0;i<len;i++)
      flag[i]=0;
     for( i=0;i<numsSize;i++)
 {    count=0;
 
     for(int j=0;j<numsSize;j++)
     {
         if(flag[j]==0)
      if(nums[i]==nums[j])
     {
         flag[j]=1;
         count++;
     }
         
     }
     if(count==1)
     break;
   
}
if(i<numsSize)
return nums[i];
else
return 0;
}
