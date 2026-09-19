/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int size, int* returnSize) {
    int *arr=malloc(size *sizeof(int));
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(nums[i]%2==0)
        {
            arr[j++]=nums[i];
        }

    }
       for(int i=0;i<size;i++)
    {
        if(nums[i]%2!=0)
        {
            arr[j++]=nums[i];
        }

    }
    *returnSize =j;
    return arr;
    
}