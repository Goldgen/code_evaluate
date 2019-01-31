#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[100];
    for(i=0,j=0;n>0;n/=2,i++)
    {
        a[i]=n%2;
        j++;
    }
    for(i=j-1;i>=0;i--)
        printf("%d",a[i]);
}
