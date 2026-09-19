int pivotIndex(int* nums, int size) {
    int right=0;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+nums[i];
    }
    for(int i=0;i<size;i++)
    {
        right=right+nums[i];
        int left=sum-right+nums[i];
        if(left==right)
        {
            return i;
        }
    }
    return -1;
    
                                        
}