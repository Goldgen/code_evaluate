#include <stdio.h>
int main()
{
    int cock,hen,chick;

    for(cock=1;cock<=14;cock++)
    {
    for(hen=1;hen<=19;hen++)
    {
    for(chick=1;chick<=300;chick++)
    {
    if((7*cock+5*hen+chick/3.0==100)&&(cock+hen+chick==100))
    printf("%d %d %d",cock,hen,chick);
     }
     }
     }
    return 0;
}
