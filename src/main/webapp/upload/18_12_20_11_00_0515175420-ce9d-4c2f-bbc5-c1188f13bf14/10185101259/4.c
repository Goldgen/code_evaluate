#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void daoxu()
{
   char arry;
   arry=getchar();
   if(arry=='?')
        return 0;
   daoxu();
   putchar(arry);

}
int main()
{
    daoxu();
    return 0;
}
