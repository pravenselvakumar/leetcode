void moveZeroes(int* nums, int size) {
    int i=0,j=0;
    for(int i=0;i<size;i++)
    {
        if(nums[i]!=0)
        {
           int temp=nums[i];
           nums[i]=nums[j];
           nums[j]=temp;
           j++;
        }
    }
    
}