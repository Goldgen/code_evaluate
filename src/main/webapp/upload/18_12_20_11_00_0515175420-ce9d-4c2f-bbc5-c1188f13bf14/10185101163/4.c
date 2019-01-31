#include <stdio.h>
#include <stdlib.h>
void A(){
    int c;
    if((c=getchar())!='?')
    {A();
    putchar(c);}

}
int main()
{
    A();
    return 0;
}
