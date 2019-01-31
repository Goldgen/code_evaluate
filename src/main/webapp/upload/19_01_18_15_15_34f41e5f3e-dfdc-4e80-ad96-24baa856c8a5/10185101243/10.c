#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s,e;
    e=2;
    scanf("%d",&n);
    printf("{}\n{0}\n");
    for(i=1;i<=n-1;i++)
    {
        printf("{%d}\n",i);
        printf("{0,%d}\n",i);
        for(s=1;s<i;s++)
        {printf("{%d,%d}\n",s,i);

            while(e<=n-1)
            {printf("{%d,",e-2);
            printf("%d,",e-1);
            printf("%d}",e);
            e++;
            break;
            }
          }




    }
    return 0;
}
