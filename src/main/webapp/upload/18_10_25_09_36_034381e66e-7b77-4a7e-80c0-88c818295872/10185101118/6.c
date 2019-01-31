#include<stdio.h>
int main()
{
    int n;
    char a='*';
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)
        for(int j=1;j<=i;j++)
        {
                if(j==1||j==i)printf("%c",a);
                else printf(" ");
                if(j==i)printf("\n");
        }
    for(int v=1;v<=n;v++)printf("%c",a);
    return 0;
}