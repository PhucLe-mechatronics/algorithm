int mySqrt(int x) 
{
    int k=1;
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else
    {
        while(k<=(x/k))
        {
            k++;
        }
        return k-1;
    }      
}