#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int count1=0;
    int count2=0;
    char str[80];
    fgets(str,80,stdin);
    n=strlen(str)-1;
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
        {
            if(str[i]==str[n-i-1])
                count1++;
        }
        if(count1<n/2-1)
            printf("False");
        else
            printf("True");
    }
    if(n%2!=0)
    {
        for(int i=0;i<(n-1)/2;i++)
        {
            if(str[i]==str[n-i-1])
                count2++;
        }
        if(count2<(n-1)/2-1)
           printf("False");
        else
            printf("True");
    }
    return 0;
}