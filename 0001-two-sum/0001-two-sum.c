#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int*return_array=malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                return_array[0]=i;
                return_array[1]=j;
                *returnSize = 2;
                return return_array;
            }
        }
    }

    return return_array;
}