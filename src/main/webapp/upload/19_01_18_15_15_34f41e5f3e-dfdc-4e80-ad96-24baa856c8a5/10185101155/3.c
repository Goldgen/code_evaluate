#include <stdio.h>
#include <stdbool.h>
bool prime(int c)
{
   int m = 2;
   int t = 0;
   while (m<=c)
   {
     if(c%m==0&&m!=1&&m!=c)
        break;
     if (m==c)
        t = 1;
        m++;
   }
   return (t==1)?true:false;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n);
    int a,b;
    for(a=1;a<=n/2;a++)
    {
        b = n-a;
        if(prime(a)==true&&prime(b)==true)
            printf("=%d+%d",a,b);
    }
    return 0;



}
