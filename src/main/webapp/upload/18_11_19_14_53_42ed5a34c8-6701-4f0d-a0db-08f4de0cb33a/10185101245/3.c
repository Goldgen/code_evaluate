#include <stdio.h>
#include <stdlib.h>
int k=0;
int cal(int n)
{
    if(n<=0)
        return 0;
    int m=0;
    scanf("%d",&m);
    cal(m);
    k++;
    if(k>1)
    printf(" %d",n);
    else
        printf("%d",n);
}
int main()
{
   int n=0;
   scanf("%d",&n);
   cal(n);

    return 0;
}
