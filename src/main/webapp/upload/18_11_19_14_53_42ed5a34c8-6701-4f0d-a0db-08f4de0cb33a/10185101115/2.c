#include <stdio.h>
#include <stdlib.h>

int all(int);

int main()
{int n;
scanf("%d",&n);
    all(n);
    return 0;
}

int all(int n)
{int a,b=0;
do
{
    a=n%10;
    n=n/10;
    b+=a;
}while(n>0);
printf("%d",b);
}
