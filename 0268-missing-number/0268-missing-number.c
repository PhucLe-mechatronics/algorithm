#include <stdlib.h>
int Compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return (num1 - num2);
}
int missingNumber(int* nums, int numsSize) {
    int compare=0;
    qsort(nums,numsSize,sizeof(int),Compare);
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==compare)
        {
            compare++;
        }
        else
        {
            return compare;
        }
    }
    return numsSize;
}