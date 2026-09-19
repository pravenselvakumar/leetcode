int findMaxConsecutiveOnes(int* nums, int size) {
    int max=0;
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(nums[i]==1)
        {
            count++;
        }
        if(count>max)
        {
            max=count;
        }
        if(nums[i]!=1)
        {
            count=0;
        }
    }
    return max;
    
}