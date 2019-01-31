#include<stdio.h>
int main()
{
    int n;
    char a='*';
    scanf("%d",&n);
    for(int i=0;i<=(n-1)/2-1;i++)
        {
            for(int j=1;j<=(n+1)/2+i;j++)
                {
                    if(j==(n+1)/2+i||j==(n+1)/2-i)
                        printf("%c",a);
                    else printf(" ");
                }
            printf("\n");
        }
    for(int v=1;v<=n;v++)printf("%c",a);
    return 0;
}