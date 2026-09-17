int firstUniqChar(char* s) {
    int str[26]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        str[s[i]-'a']++;
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if(str[s[i]-'a']==1)
        {
            return i;
        }

    }
    return -1;
    
}