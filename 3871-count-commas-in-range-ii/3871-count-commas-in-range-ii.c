long long countCommas(long long n) {
    long long count=0;
    long long div=1000;
    while(n>=div)
    {
        count=count+(n-(div-1));
        div=div*1000;
    }
    return count;
    
}