#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, j, l, x, d=1, n=0, p=-1;
    char str[100], a[100];
    gets(str);
    gets(a);
    l = strlen(a);

    for(i=0; i<100; i++)
    {
        if(str[i]==a[i])
            {
                for(j=0, x=1; j<l; j++)
                {
                    if(str[j]!=a[j])
                    {
                        x = 0;
                        break;
                    }
                }
                if(x==1)
                    {
                        n++;
                        if(d==1)
                        {
                            d = 0;
                            p = i+1;
                        }
                    }
            }
    }
    printf("%s: %d time(s), first at %d", a, n, p);
}
