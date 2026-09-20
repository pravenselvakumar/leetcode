int missingNumber(int* nums, int size) {
    int result=size;
    for(int i=0;i<size;i++)
    {
        result=result^i^nums[i];
    }
    return result;
    
}