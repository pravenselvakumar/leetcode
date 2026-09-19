int removeDuplicates(int* arr, int size) {
   int i,count=1;
   //int arr1[size];
   for(i=1;i<size;i++)
   {
    if(arr[i]!=arr[i-1])
    {
        arr[count]=arr[i];
        count++;
    }
   }
    return count;
    
}