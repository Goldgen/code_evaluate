#include<stdio.h>
#include<string.h>
#include<memory.h>
int main()
{
    int i,j,m;
    scanf("%d",&m);
    for(i=1;i<m;i++)
    {
        for(j=1;j<=2*m-2*i;j++)
            printf(" ");
        for(j=1;j<i;j++)
            printf("%d+",j);
        printf("%d=",i);
        for(j=i;j>1;j--)
            printf("%d+",j);
        printf("%d\n",1);
    }
    for(j=1;j<m;j++)
        printf("%d+",j);
    printf("%d=",m);
    for(j=m;j>1;j--)
        printf("%d+",j);
    printf("%d",1);
    return 0;

}
