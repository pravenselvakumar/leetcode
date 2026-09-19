int maxProfit(int* p, int size) {
    int max=0,i;
    int min=p[i];
    for( i=0;i<size;i++)
    {
        int diff=p[i]-min;
        if(p[i]<min)
        {
            min=p[i];
        }
        if(diff>0)
        {
            max+=diff;
            min=p[i];
        }
    }
    return max;
    
}