bool isPerfectSquare(int num) {
    long long start=1;
    long long end=num;
    long long mid;
    while(start<=end)
    {
        mid=start+((end-start)/2);
        if(mid*mid>num)
        {
            end=mid-1;
        }
        else if(mid*mid<num)
        {
            start=mid+1;
        }
        else if(mid*mid==num)
        {
            return true;
        }
    }
    return false;
}