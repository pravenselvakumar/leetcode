bool isPalindrome(int x) 
{
    unsigned  int temp=x;
    unsigned int rem=0;
    while(temp!=0)
    {
        rem=temp%10+rem*10;
        temp=temp/10;

    }
    if(x==rem)
    {
        return true;
    }
    return false;
    
}
