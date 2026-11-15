#include <stdlib.h>
int compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return (num1 - num2);
}
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *return_array = malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<0)
        {
            nums[i]=nums[i]*(-1);
        }
    }
    qsort(nums, numsSize, sizeof(int), compare);
    for(int i=0;i<numsSize;i++)
    {
        return_array[i]=nums[i]*nums[i];
    }
    *returnSize=numsSize;
    return return_array;
}