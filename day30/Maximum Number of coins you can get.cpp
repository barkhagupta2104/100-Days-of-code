   int maxCoins(vector<int>& piles) 
    { int result=0;
    int n=piles.size()/3;
      sort(piles.begin(),piles.end());
        for(int i=0;i<piles.size()-1;i++)
        {
            piles.erase(piles.end()-1);
            result+=piles[piles.size()-1];
            piles.erase(piles.end()-1);
            if(n==i+1)
            break;
        }
        return result;
