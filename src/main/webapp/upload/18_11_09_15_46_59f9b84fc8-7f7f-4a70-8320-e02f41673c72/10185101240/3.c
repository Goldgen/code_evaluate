#include<stdio.h>
int main()
{
    char c;
    int n,i,j,k;
    scanf("%d",&n);
    c='A';
    for(k=1-n;k<n-1;k++)
    {
        i=n-abs(k);
        for(j=1;j<n-i+1;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("%c",c);
        printf("\n");
        c++;
    }
    for(j=1;j<=n-i+1;j++)
            printf(" ");
            printf("%c",c);

		return 0;
}
