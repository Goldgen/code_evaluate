#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[81],*y;
    gets(a);
    y=a;
    int j=0,d,x=0,g;
    d=strlen(a);
    for (int i=0; i<=d; i++)
    {
        if (isalpha(a[i])) j++;
        else
        {
            if (x<j)
            {
                x=j;
                g=i-x;
                j=0;
            }
            else j=0;
        }
    }
    y=&a[g];
    for (int v=0; v<x; v++)
        printf("%c",*y++);
    printf("\n");
    return 0;
}
