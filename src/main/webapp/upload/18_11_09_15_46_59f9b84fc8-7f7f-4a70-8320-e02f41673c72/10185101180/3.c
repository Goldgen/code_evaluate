#include <stdio.h>
int main()
{
    int a,b,c,d,e,i,j,k,n,m;
    scanf("%d",&n);
    m='A';
    for(i=0,d=n;i<n;i++)
    {
        if(i!=0)
        {
            printf("\n");
        }
        for(j=0;j<d-1;j++)
        {
            printf(" ");
        }
        d--;
        for(k=0;k<2*i+1;k++)
        {
            printf("%c",m);
        }
        m++;
    }
    for(a=0,e=n;a<n-1;a++)
    {
        printf("\n");
        for(b=0;b<a+1;b++)
        {
            printf(" ");
        }
        for(c=0;c<2*e-3;c++)
        {
            printf("%c",m);
        }
        e--;
        m++;
    }
    return 0;
}
