char* reverseVowels(char* s)
{
    char arr[] = "aeiouAEIOU";

    int left = 0;
    int right = strlen(s) - 1;

    while(left < right)
    {
        while(left < right && strchr(arr, s[left]) == NULL)
        {
            left++;
        }

        while(left < right && strchr(arr, s[right]) == NULL)
        {
            right--;
        }

        if(left < right)
        {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }

    return s;
}