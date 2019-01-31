#include<stdio.h>
int main(void)
{
    int i,j,n;
    scanf("%d",&n);
    char ch = 'A';
    for(i = 1;i <= n-1;i++)
    {
        for(j = 1;j <= n-i;j++)
            printf(" ");
        for(int k = 1;k <= 2*i-1;k++)
        {   if(k == 2*i-1)
                printf("%c\n",ch+i-1);
            else
                printf("%c",ch+i-1);
        }
    }
    for(i = 1;i <= 2*n-1;i++)
        printf("%c",ch+n-1);
    printf("\n");
    for(i = 1;i <= n-1;i++)
    {
        for(j = 1;j <= i;j++)
            printf(" ");
        for(int k = 1;k <= 2*(n-i)-1;k++)
        {
            if((k == 2*(n-i)-1)&&(i < n-1) )
                printf("%c\n",ch+n-1+i);
            else
                printf("%c",ch+n-1+i);
        }
    }
    return 0;
}
