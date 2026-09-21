/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* num, int size, int target, int* returnSize) {
    int *arr=malloc(2 *sizeof(int));
    int i=0,j=size-1;
while(i<j)
{
            int sum=0;
            sum=num[i]+num[j];
        
        if(sum==target)
        {
            arr[0]=i+1;
            arr[1]=j+1;
                *returnSize =2;
    return arr;
        }
        if(sum>target)
        {
            j--;
        }
        else
        {
            i++;
        }
        
    }
    return NULL;

    
    
}