#include <stdio.h>
void turn()
{
   char arry;
   arry=getchar();
   if(arry=='?')
        return 0;
   turn();
   putchar(arry);

}
int main()
{
    turn();
    return 0;
}