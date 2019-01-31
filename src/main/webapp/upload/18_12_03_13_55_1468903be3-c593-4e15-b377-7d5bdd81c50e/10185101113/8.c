#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[81];
    int n,flag=0;
    gets(str);
    n=strlen(str);
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        if(str[i]!=str[j])
            flag=1;
    }
    if(flag==1)
        printf("False");
    else
        printf("True");
    return 0;
}

