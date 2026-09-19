/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int size1, int* nums2, int size2, int* returnSize) {
    int size=0;
    if(size1<size2)
    {
        size=size1;
        
    }
    else
    {
        size=size2;
    }

    int *arr=malloc(size * sizeof(int));
    int fre[1001]={0};
    for(int i=0;i<size1;i++)
    {
        fre[nums1[i]]++;
    }
    int j=0;
    for(int i=0;i<size2;i++)
    {
        if(fre[nums2[i]]!=0)
        {
            arr[j++]=nums2[i];
            fre[nums2[i]]=0;
        }
        
    }
    *returnSize=j;
    return arr;
}