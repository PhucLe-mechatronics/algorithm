#include <stdlib.h>
#include <limits.h>
int compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return (num1 - num2);
}
int thirdMax(int* nums, int numsSize) 
{
    long long max3=LLONG_MIN;
    long long max2=LLONG_MIN; 
    long long max1=LLONG_MIN;
    for(int i=0;i<numsSize;i++)
    {
        if((nums[i]==max1)||(nums[i]==max2)||(nums[i]==max3))
        {

        }
        else
        {
            if(nums[i]>max3)
            {
                max1=max2;
                max2=max3;
                max3=nums[i];
            }
            else if((nums[i]<max3)&&(nums[i]>max2))
            {
                max1=max2;
                max2=nums[i];
            }
            else if((nums[i]<max2)&&(nums[i]>max1))
            {
                max1=nums[i];
            }
        }
    }
    if(max1==LLONG_MIN)
    {
        return max3;
    }
    else
    {
        return max1;
    }
}