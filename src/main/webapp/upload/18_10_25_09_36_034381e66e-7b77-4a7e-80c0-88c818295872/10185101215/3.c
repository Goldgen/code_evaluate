#include<stdio.h>
#include<math.h>
int main (void)
{
    long int i,s;
    int n;
    s=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s*=i;
    printf("%ld",s);
   return 0;
}


