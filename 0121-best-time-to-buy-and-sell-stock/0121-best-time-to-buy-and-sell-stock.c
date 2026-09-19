int maxProfit(int* prices, int pricesSize) {
    int max=0;
    int min=prices[0];
    for(int i=0;i<pricesSize;i++)
    {
        int diff=prices[i]-min;

        if(prices[i]<min)
        {
            min=prices[i];

        }
        if(max<diff)
            max=diff;
    }
    return max;
}