/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int size, int* returnSize) {
    int *arr=malloc(size * sizeof(int));
    int j=0;
    int k=1;
    for(int i=0;i<size;i++)
    {
        if(nums[i]>0)
        {
            arr[j]=nums[i];
            j=j+2;
        }
        else
        {
            arr[k]=nums[i];
            k=k+2;
        }
    }
    *returnSize=size;
    return arr;
    
}