 bool containsNearbyDuplicate(vector<int>& nums, int k)
     {
        
        int n=nums.size();
        map<int,pair<int,int>>mp;
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]].first==1)
            {
                if(abs(i-mp[nums[i]].second)<=k)
                return true;
            }
             mp[nums[i]].first=1;
             mp[nums[i]].second=i;  
        }
        return false;
    }
