#include <stdio.h>
int DtoB(int);
int main()
{
    int n;
    scanf("%d",&n);
    DtoB(n);
   return 0;
}
int DtoB(int b)
{
    if (b!=0)
    {
        DtoB(b/2);
        printf("%d",b%2);
    }
    return;
}
