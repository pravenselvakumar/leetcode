int compare(void const *a,void const *b)
{
    return *(int * )a-*(int *)b;
}
double findMedianSortedArrays(int* nums1, int size1, int* nums2, int size2) {
    int len=size1+size2;
    int arr[len];
    int j=0;
    for(int i=0;i<size1;i++)
    {
        arr[j++]=nums1[i];
    }
    for(int i=0;i<size2;i++)
    {
        arr[j++]=nums2[i];
    }
    qsort(arr,len,sizeof(int),compare);
    float result=0;
    if(len%2==0)
    {
        result=(float)(arr[len/2]+arr[(len/2)-1])/2;
        
    }
    else
    {
        result=(float)(arr[len/2]);
        
    }
    return result;
}