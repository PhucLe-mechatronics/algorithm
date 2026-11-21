int minEatingSpeed(int* piles, int pilesSize, int h) {
    int Number_banana_ate=piles[0];
    for(int i=0;i<pilesSize;i++)
    {
        if(piles[i]>=Number_banana_ate)
        {
            Number_banana_ate=piles[i];
        }
    }
    long long time_eat=0;
    int begin=1;
    int end=Number_banana_ate;
    int mid;
    while (begin<end)      
    {
        mid=begin+((end-begin)/2);
        time_eat=0;
        for(int i=0;i<pilesSize;i++)
        {
            time_eat=(time_eat+(piles[i]-1)/mid)+1;
        }
        if(time_eat>h)
        {
            begin=mid+1;
        }
        else
        {
            end=mid;   
        }
    }
        if(Number_banana_ate==0)
        {
            return 1;
        }
    return begin;
}