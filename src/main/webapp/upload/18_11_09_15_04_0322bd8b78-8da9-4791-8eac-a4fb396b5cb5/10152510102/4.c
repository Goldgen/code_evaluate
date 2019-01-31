#include<stdio.h>
#include<string.h>
#include<memory.h>
int main()
{
    int i,n=1,m;
    scanf("%d",&m);
    for(i=2;i<=m;i++)
    {
        n*=i;
        if(n>20181111)
            n%=20181111;
    }
    printf("%d",n);
    return 0;

}
