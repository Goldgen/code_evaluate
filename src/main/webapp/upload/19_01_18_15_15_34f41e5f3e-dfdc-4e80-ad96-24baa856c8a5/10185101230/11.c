#include <stdio.h>
int main()
{
int a,b,c,n;
for(a=1;a<10;a++)
{
for(b=0;b<10;b++)
    {
        for(c=0;c<10;c++)
            {
              n=100*a+10*b+c;
                if(n==(a*a*a+b*b*b+c*c*c)&&n!=407)
                printf("%d ",n);
            }
    }
}
printf("407");
return 0;
}
