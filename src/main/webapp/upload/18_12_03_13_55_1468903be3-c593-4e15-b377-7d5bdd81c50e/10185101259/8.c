#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,m,i,flag=0;
    char string[81]={'\0'};
    gets(string);
    n=strlen(string);
    m=n/2;
    for(i=0;i<m;i++)
    {
        if(string[i]==string[n-i-1])
            flag=flag+1;
    }

    if(flag==m)
        printf("True");
    else
        printf("False");
    return 0;
}
