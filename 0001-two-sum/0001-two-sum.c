/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int size, int target, int* returnSize) {
    int *arr=malloc (2*sizeof(int));
    for(int i=0;i<size-1;i++)
    {
        int sum=0;
        for(int j=i+1;j<size;j++)
        {
            sum=nums[i]+nums[j];
            if(sum==target)
            {
                arr[0]=i;
                arr[1]=j;
                *returnSize=2;
                return arr;
            }

        }
    }
return 0;
    
}