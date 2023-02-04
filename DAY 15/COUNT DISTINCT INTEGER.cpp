 set<int> s;

        for(int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        

        
            int last, rev=0;
            while(nums[i]>0)
            {
                last=nums[i]%10;
                rev=rev*10+last;
                nums[i]=nums[i]/10;
            }
            s.insert(rev);
        }
        
        return s.size();
