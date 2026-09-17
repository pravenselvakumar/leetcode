bool isPalindrome(char* s) {
    int j=0,i=0;
    while(s[i]!='\0')
    {
        if(isalpha(s[i])||isdigit(s[i]))
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=tolower(temp);
            j++;
        }
        i++;
    }
    s[j]='\0';
    int left=0;
    int right=strlen(s)-1;
    while(left<right)
    {
        if(s[left]!=s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}