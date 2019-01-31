#include <stdio.h>
#include <stdlib.h>

int er(int);

int main ()
{int n;
scanf("%d",&n);
er(n);
}

int er(int n)
{int a;
if(n!=0)
{
    a=n%2;
    n=n/2;
    er(n);
    printf("%d",a);
}

}

