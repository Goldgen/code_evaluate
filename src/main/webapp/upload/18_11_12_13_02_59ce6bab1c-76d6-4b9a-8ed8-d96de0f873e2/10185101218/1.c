#include<stdio.h>
int  pro(int,int);

int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
            printf(" %d * %d = %2d",b,a,pro(a,b));
        }
        if(a!=n)printf("\n");
    }
    return 0;
}

int pro(int a,int b)
{
    return a*b;
}
