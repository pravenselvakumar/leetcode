int vowelConsonantScore(char* s) {
    int count=0,vow=0,res=0;
    //int len=strlen(s)-1;
    for(int i=0;s[i]!='\0';i++)
    {
        char ch=s[i];
        if(ch>='a'&& ch<='z')
        {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            vow++;
        }
        else
        {
           count++; 
        }
        }
    }
    if(count==0)
    {
        return 0;
    }
    else
    {
    return vow/count;
    }
   // return 0;

    
}