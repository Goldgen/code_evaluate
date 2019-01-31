#include<stdio.h>
int main()
{
    char c;
    int i,j,k,n;
    scanf("%d",&n);
    c='A';
    for(k=1-n;k<=n-1;k++)
    {
        i=n-abs(k);
        for(j=1;j<=n-i+1;j++)
        {
            if(j<n-i+1)
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
            printf("%c",c);
        if(k<n-1)
            printf("\n");
        c++;
    }
}
