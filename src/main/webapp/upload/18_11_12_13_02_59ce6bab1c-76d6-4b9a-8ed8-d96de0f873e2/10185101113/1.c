#include<stdio.h>
void _99_(int);
void _99_(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %d * %d =",j,i,j*i);
            if(i*j>9)
                printf(" ");
            else
                printf("  ");
            printf("%d",i*j);
        }
        if (i!=n)
            printf("\n");
    }
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    _99_(n);
    return 0;
}
