int reverseDegree(char* s) {
    int sum=0;
    for(int i=0;i<strlen(s);i++)
    {
        int pro=(26-(s[i]-'a'))*(i+1);
        sum=sum+pro;
    }
    return sum;

}