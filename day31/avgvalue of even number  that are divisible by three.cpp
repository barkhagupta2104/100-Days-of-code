int t=0,sum=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]%6==0)
        {
         t++;
         sum+=nums[i];
        }
    }
    if(t==0)
    return 0;
    else
    return sum/t;
    }
