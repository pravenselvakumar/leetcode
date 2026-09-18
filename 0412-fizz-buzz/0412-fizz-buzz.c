/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **str= malloc(n * sizeof(char *));
    for(int i=1;i<=n;i++)
    {
        if(i%3==0&&i%5==0)
        {
            str[i-1]="FizzBuzz";
        }
        else if(i%3==0)
        {
            str[i-1]="Fizz";
        }
        else if(i%5==0)
        {
            str[i-1]="Buzz";

        }
        else
        {
           char *temp = malloc(12 * sizeof(char));
            sprintf(temp, "%d", i);
            str[i-1] = temp;
        }
    }
    *returnSize=n;
    return str;
    
}