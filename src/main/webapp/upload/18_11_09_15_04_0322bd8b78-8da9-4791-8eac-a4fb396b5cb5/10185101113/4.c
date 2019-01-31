#include <stdio.h>
int main()
{
    unsigned long long n,m,s=1,i;
    scanf("%llu",&n);
    m=20181111;
    if (n==0)
    printf("1");
    else
    {
        for (i=n;i>0;i--)
         s *=i;
         printf("%llu",s%m);
    }
     return 0;
}
