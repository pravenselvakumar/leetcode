int compare(void const*a,void const *b)
{
    return *(int*)a-*(int*)b;
}
bool containsDuplicate(int* nums, int size) {
    qsort(nums,size,sizeof(int),compare);
    

    for(int i=0;i<size-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            return true;
        }

        
        
    }
    return false;
    
}