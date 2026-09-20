int maxPower(char* s) {
    if(s[0]=='\0'){
        return 0;
    }
    int count=0;
    int max=0;
    for(int i=1;s[i]!='\0';i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        if(count>max)
        {
            max=count;
        }
        if(s[i]!=s[i-1])
        {
            count=0;
        }
    }
    return max+1;
    
}