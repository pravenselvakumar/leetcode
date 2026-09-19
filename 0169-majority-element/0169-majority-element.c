int majorityElement(int* nums, int size) {
    int count=1;
    int max=nums[0];
    for(int i=1;i<size;i++)
    {
        if(nums[i]==max)
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            max=nums[i];
            count++;
        }
        
    }
    return max;
    
    
}