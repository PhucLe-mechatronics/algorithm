int findMin(int* nums, int numsSize) {
    int start=0;
    int end=numsSize-1;
    int mid=0;
    if(start=0&&end==0)
    {
        return nums[start];
    }
    while(start<end)
    {
        mid=start+((end-start)/2);
        if(nums[mid]>nums[numsSize-1])
        {
            start=mid+1;
        }
        else if(nums[mid]<=nums[numsSize-1])
        {
            end=mid;
        }
    }
    return nums[end];
}