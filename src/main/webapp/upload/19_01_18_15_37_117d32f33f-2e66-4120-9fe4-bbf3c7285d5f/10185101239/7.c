#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
        printf("%d",a);
    else
    { if(c>b&&c>a&&c>d)
        printf("%d",c);

        else
        {if (d>b&&d>a&&d>c)
        printf("%d",d);
       else
       printf("%d",b);
        }
       }
return 0;
} 
