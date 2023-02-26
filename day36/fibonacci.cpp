int fib(int n) 
    {
         int pre=0;
         int last=1;
         if(n==0||n==1)
         return n;
         int   sum=0;
        for(int i=2;i<=n;i++)
        {
            sum=pre+last;  pre=last;
            last=sum;
          
        }
        return sum;
