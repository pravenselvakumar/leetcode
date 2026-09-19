void rotate(int* nums, int size, int k) {
    int arr[size];
    int j=0;
    k=k%size;
    for(int i=size-k;i<size;i++)
    {
        arr[j++]=nums[i];

    }
    for(int i=0;i<size-k;i++)
    {
        arr[j++]=nums[i];
    }
        for(int i=0;i<size;i++)
    {
        nums[i]=arr[i];
    }
    
}