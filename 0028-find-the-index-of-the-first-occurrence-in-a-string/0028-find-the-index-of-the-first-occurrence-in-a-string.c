int strStr(char* a, char* b) {
    //char str[26]={0};
    // if(strstr(a,b)!=0)
    // {
    //     return -1;
    // }
    int j;
    for(int  i=0;a[i]!='\0';i++)
    {
        
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i+j]!=b[j])
            break;
        }
        if(b[j]=='\0')
        return i;
    }
    
    return -1;


    

}