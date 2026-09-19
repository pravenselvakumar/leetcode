/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int size, int* returnSize) {
    int j=0,i;
    int fre[100001]={0};
    int *arr=malloc(size *sizeof(int));
    for(int i=0;i<size;i++)
    {
        fre[nums[i]]++;
    }
    for(int i=0;i<size;i++)
    {
        if(fre[nums[i]]>1)
        {
            arr[j++]=nums[i];
            fre[nums[i]]=0;
        }
    }
    *returnSize=j;
    return arr;
    
}