#include <stdio.h>

void Not()
{
    int num = 0;
    scanf("%d",&num);
    if (num<=0)
        return;
        Not();
    printf("%d ",num);
}
int main()
{
     int n = 0;
     scanf("%d",&n);
     Not();
     printf("%d",n);
     return 0;
}
