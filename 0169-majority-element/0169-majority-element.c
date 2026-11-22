int majorityElement(int* nums, int numsSize) {
    int count=1;
    int object=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(count==0)
        {
            object=nums[i];
            count++;
        }
        else if(nums[i]!=object)
        {
            count--;
        }
        else
        {
            count++;
        }
    }
    return object;   
}