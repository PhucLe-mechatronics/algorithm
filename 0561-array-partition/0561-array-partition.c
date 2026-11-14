int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int arrayPairSum(int* nums, int numsSize) {
    int temp;
    int count=0;
    int SumAll=0;
    qsort(nums, numsSize, sizeof(int), compare);
    for(int i=0;i<numsSize;i+=2)
    {      
        SumAll=SumAll+nums[i];
    }
    return SumAll;
}