int singleNumber(int* nums, int size) {
    int i=0;
    int result=0;
    for( i=0;i<size;i++)
    {
        result=result^nums[i];
    }
    return result;
}
        