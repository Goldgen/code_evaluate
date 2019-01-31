#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("1");
    for(int i=2;i<=n;i++)
    {
        printf("\n1 ");
        for(int a=1,x=1;a<i-1;++a)
        {
            x=(i-a)*x/a;
            printf("%d ",x);
        }
        printf("1");
    }
    return 0;
}
