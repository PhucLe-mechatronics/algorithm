#include <stdlib.h>
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int found=0;
    if (numsSize==0)
    {
    *returnSize = 2;
    int* return_array = malloc(2 * sizeof(int));
    return_array[0] = -1;
    return_array[1] = -1;
    return return_array;
    }
    int start=0;
    int end=numsSize-1;
    int mid;
    while(start<=end)
    {
        mid=start+((end-start)/2);
        if(nums[mid]>target)
        {
            end=mid-1;
        }
        else if(nums[mid]<target)
        {
            start=mid+1;
        }
        if(nums[mid]==target)
        {
            found++;
            break;
        }
    }
    if (found == 0) {
        *returnSize = 2;
        int* return_array = malloc(2 * sizeof(int));
        return_array[0] = -1;
        return_array[1] = -1;
        return return_array;
    }
    // find fist value;
    int start_position;
    int start1=0;
    int end1=mid;
    int mid1;
    while(start1<=end1)
    {
        mid1=start1+((end1-start1)/2);
        if(nums[mid1]==target)
        {
            start_position=mid1;
            end1=mid1-1;
        }
        else
        {
            start1=mid1+1;
        }
    }
    // find last value
    int end_possition;
    int start2=mid;
    int end2=numsSize-1;
    int mid2;
    while(start2<=end2)
    {
        mid2=start2+((end2-start2)/2);
        if(nums[mid2]==target)
        {
            end_possition=mid2;
            start2=mid2+1;
        }
        else
        {
            end2=mid2-1;
        }
    }
    int *return_array=malloc(2*sizeof(int));
    return_array[0]=start_position;
    return_array[1]=end_possition;
    *returnSize=2;
    return return_array;
    
}