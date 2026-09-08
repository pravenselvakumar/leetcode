bool canMakeArithmeticProgression(int* arr, int size) 
{
    int temp=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

            }

        }
    }
    int def=arr[1]-arr[0];
    for(int i=1;i<size;i++)
    {
        
        if(arr[i]-arr[i-1]!=def)
        {
            return false;
        }
    }
    return true;
    
}