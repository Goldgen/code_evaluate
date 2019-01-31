#include <stdio.h>
int main()
{
    int n=0;
    int t=1;
    for(n=0;n<=9;n++)
    {
        if((n+6)%3==0)
          {
            printf("%d",10*n+6);
        if(t<=3)
            printf(" ");
        t++;
          }

    }
    return 0;
}