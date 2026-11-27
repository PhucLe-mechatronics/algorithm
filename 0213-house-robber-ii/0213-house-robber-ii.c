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
    else if(numsSize==3)
    {
        int c=findmax(nums[0],nums[1]);
        return findmax(c,nums[2]);
    }
    //
    int array1[numsSize];
    int array2[numsSize];
    array1[0]=nums[0];
    array1[1]=findmax(nums[0],nums[1]);
    for(int i=2;i<numsSize-1;i++)
    {
        array1[i]=findmax(array1[i-1],array1[i-2]+nums[i]);
    }
    // 
    array2[0]=nums[1];
    array2[1]=findmax(nums[1],nums[2]);
    
    for(int i=3;i<numsSize;i++)
    {
        array2[i-1]=findmax(array2[i-2],array2[i-3]+nums[i]);
    }
    if(array1[numsSize-2]<array2[numsSize-2])
    {
        return array2[numsSize-2];
    }
    else
    {
        return array1[numsSize-2];
    }

}