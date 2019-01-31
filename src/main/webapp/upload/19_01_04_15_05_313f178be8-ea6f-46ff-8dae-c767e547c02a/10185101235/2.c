#include<stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int i = 0;
    int n = 1;
    scanf("%d+%d=%d",&a,&b,&c);
    for(i=0;i<10;i++)
    {

        if(a*n+b==c)
            break;
        if(b*n+a==c)
        {
            i=-i;
            break;
        }
        n*=10;
    }
    printf("%d",i);
}
