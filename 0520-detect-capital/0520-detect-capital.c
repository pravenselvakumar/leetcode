bool detectCapitalUse(char* s) {
    int i=0;
    int upper=0;
    int len=strlen(s);
    while(s[i]!='\0')
    {
        if(s[i]>='A'&& s[i]<='Z')
        {
            upper++;
        }
      
        i++;
    }
    return upper==0||upper==len ||(upper==1 && s[0]>='A'&&s[0]<='Z');
    
}