class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) 
    {
        int count=0;
        while(1)
        {
           
            for(int i=0;i<tickets.size();i++)
            {
                if(tickets[i]>0)
                {
                tickets[i]--;
                   count++;
                }
                 if(i==k && tickets[i]==0) 
                    return count;
                 
            }
          
          
        }
    }
};
