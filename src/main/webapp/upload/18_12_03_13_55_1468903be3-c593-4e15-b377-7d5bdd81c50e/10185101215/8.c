#include<stdio.h>
#include<string.h>
int main()
{
    char a[81],b[81];
    int i,n,x=0;
    gets(a);
    n=strlen(a);
    for(i=n-1;i>=0;i--)
    {
        b[n-i-1]=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
            x++;
    }
    if(x==n)
        printf("True");
    else
        printf("False");
   return 0;
}