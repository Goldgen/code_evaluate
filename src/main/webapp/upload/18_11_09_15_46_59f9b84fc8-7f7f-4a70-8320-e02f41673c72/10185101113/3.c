#include<stdio.h>
int main()
{
    int n,i,j,p=1,q=1,m=1;
    char ch='A';
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
           putchar(' ');
        }
        for(;p<=q;p++)
        {
            printf("%c",ch);
        }
        p=1;
        m++;
        q=m*2-1;
        ch++;
        printf("\n");

    }
    m=m-2;q=2*m-1;
    for (i=1;i<=n-1;i++)
    {
        for(j=n-1;j>=n-i;j--)
        {
           putchar(' ');
        }
        for(;p<=q;p++)
        {
            printf("%c",ch);
        }
        p=1;
        m--;
        q=m*2-1;
        ch++;
        if(i!=n-1)
            printf("\n");

    }
    return 0;
}
