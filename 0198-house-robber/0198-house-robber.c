int findmax(int a, int b)
{
    if(a>=b)
    {
        return a;
    }
    else return b;
}
int rob(int* nums, int numsSize) {
    if(numsSize==1)
    {
        return nums[0];
    }
    else if(numsSize==2)
    {
        return findmax(nums[0],nums[1]);
    }
    int array1[numsSize];
    array1[0]=nums[0];
    array1[1]=findmax(nums[0],nums[1]);
    for(int i=2;i<numsSize;i++)
    {
        array1[i]=findmax(nums[i]+array1[i-2],array1[i-1]);
    }
    return array1[numsSize-1];
}