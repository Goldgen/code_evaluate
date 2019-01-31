#include <stdio.h>
int main()
{   int cock=1,hen=1,chicken=1;
    for (cock=1;cock<13;cock++)
        {for (hen=1;hen<20;hen++)
                {chicken=100-cock-hen;
                if ((chicken%3)==0&&((cock*7+hen*5+chicken/3)==100))
                    printf("%d %d %d",cock,hen,chicken);}
            }}