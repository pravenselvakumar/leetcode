int pivotInteger(int n) {
    int sum=0;
    //int temp=n;
    for(int i=0;i<=n;i++)
    {
        sum=sum + i;

    }
    int i;
    int left=0;
    for (i=1;i<=n;i++)
    {
        left=left + i;
        int right =sum-left + i;
        if(left==right)
        {
            return i;
        }
    }
    return -1;
    
}