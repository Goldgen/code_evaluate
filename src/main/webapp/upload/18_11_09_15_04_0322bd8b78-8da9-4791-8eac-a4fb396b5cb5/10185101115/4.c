#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
scanf("%d",&n);
if(n==0)
{
    printf("1");
}
else
{int i=1;
 long long int a=1;
for(;i<=n;i++)
{
    a*=i;
}
    int b=a%20181111;
    printf("%d",b);
}
    return 0;
}