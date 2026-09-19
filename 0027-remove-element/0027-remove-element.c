int removeElement(int* nums, int size, int val) {
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(nums[i]!=val)
        {
            nums[j++]=nums[i];
        }
    }
    return j;
}