#include <stdio.h>

int main()
{
    int g, m, x;

    for(g=1; g<=14; g++)
    {
        for(m=1; m<=20; m++)
        {
            for(x=1; x<=98; x++)
            {
                if(g*21+m*15+x==300 && g+m+x==100)
                printf("%d %d %d", g, m, x);
            }
        }
    }
}
