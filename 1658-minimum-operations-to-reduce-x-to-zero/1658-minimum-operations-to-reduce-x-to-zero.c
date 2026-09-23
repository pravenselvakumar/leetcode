int minOperations(int* nums, int size, int x) {
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+nums[i];
    }
    int target=sum-x;
    if(target==0)
    {
        return size;
    }
    int left=0;
    int n=-1;
    int  add=0;
    for(int right=0;right<size;right++)
    {
        add=add+nums[right];
        while(add>target&&left<=right)
        {
            add=add-nums[left];
            left++;
        }
        if(add==target)
        {
            int length=right-left+1;
        
        if(length>n)
        {
            n=length;
        }
        }

    }
            if(n==-1)
        {
            return -1;
        }


        return size-n;
}