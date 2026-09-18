int removeDuplicates(int* arr, int size) {
    int i=0,count=0;
    int arr1[size];
    for(i=0;i<size;i++)
    {
        if(i==0||arr[i]!=arr[i-1])
        {
            arr[count]=arr[i];
            count++;
        }

    }
    return count;
    
}