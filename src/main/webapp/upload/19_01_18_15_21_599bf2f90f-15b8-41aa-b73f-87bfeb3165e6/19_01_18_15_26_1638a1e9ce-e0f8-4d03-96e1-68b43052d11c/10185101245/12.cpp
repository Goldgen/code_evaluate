#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    char d;
   scanf("%lf%c%lf",&a,&d,&b);





    switch(d)
    {
    case'+':
        c=a+b;

        break;
    case'-':
        c=a-b;

        break;
    case'*':
        c=a*b;

        break;
    case'/':
        c=a/b;

        break;
    default:
        printf("ERROR");
        break;
    }



printf("%.3f",c);

    return 0;
}