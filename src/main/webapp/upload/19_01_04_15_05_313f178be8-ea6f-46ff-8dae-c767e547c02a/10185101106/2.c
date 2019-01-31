#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    scanf("%d+%d=%d",&a,&b,&c);
    int i = 0;
        if(c%10 == b%10)
        {
            while(c != a+b)
            {


        i++;
        a = a*10;
            }
        }
        else if(c%10 == a%10)
        {
            while(c != a+b)
            {


            i--;
            b = b*10;
            }

        }

   
    printf("%d",i);
    return 0;
}
