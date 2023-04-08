class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=*max_element(piles.begin(), piles.end());
        int ans=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;    //6  9 10  6
            long long int sum=0;
            for(int i=0; i<piles.size(); i++) sum=sum+(piles[i]/mid)+((piles[i]%mid)!=0);   //3 4 6 12       3 9 16 19      3 9 16 18    3 4 6 12
            
            if(sum<=h)
            {
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;   //7 10  11
        }
        return ans;
    }
};
