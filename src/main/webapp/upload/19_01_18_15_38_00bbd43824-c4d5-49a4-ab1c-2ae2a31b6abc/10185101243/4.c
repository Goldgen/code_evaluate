#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char x;
    scanf("%c",&x);
    if ((x>='A')&&(x<='Z'))
      {
       printf("%c",x+=32);
      }
    else
    {
        printf("ERROR");
    }


    return 0;
}