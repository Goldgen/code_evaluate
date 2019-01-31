#include<stdio.h>
#include<string.h>
int test(char *a,char *b);
int main()
{
    char *a[100];
    char *b[100];
    int i = 0;
    for(;;)
    {
        scanf("%s",a+i);
        if(*(a+i) == '#')
            break;
        scanf(" %s",b+i);
        i++;


    }
int n = 0;
    for( n = 0;n < i;n++)
    {
        printf("%d\n",test(a[n],b[n]));

    }

}
int test(char *a,char *b)
{
    int i = 0,j,k = 0;
    j = strlen(b);
    while(a+i)
    {
        int m;
       m = strncmp(a+i,b,j);
       if(m == 0)
        k++;
        i++;

    }
    return k;

}
