#include <stdio.h>
int main()
{
    int n,m,s,i,j;
    scanf("%d",&n);
    if(n==1)
        printf("1=1");
    else
    for (i=(n-1)*2,s=1;i>=0;n--,s++)
    {
        printf(" ");
        for(j=1;j<=s;j++)
        {
            printf("1");
        for(m=2;m<=s;m++)
          printf("+%d",m);
        printf("=%d",s);
        for (j=s-1;j>0;j--)
            printf("+%d",j);
        }
         printf("\n");
    }
    return 0;
}
