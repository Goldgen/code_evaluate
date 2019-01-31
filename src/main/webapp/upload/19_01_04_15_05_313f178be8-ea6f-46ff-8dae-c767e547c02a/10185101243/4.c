#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char a[200];
    gets(a);
    int i=0;
    int j=0;
    int t,k;
    int flag[200];
    for(t=0;t<200;t++)
    {
        flag[t]=1;
    }

    for(i=0;(a[i]!='\n')&&(a[i]!=' ');i++)
    {
        for(k=i-1;(k>=0)&&(a[k]!=' ');k--)
      {
            if(a[i]==a[k])
                {
                   i++;
                    break;
                }
      }


                 for(j=i+1;(a[j]!='\n')&&(a[j]!=' ');j++)
            {
                if(a[i]==a[j])
                  flag[i]++;
           }



    }

    for(i=0;(a[i]!='\n')&&(a[i]!=' ');i++)
    {
        printf("%c %d；",a[i],flag[i]);
    }
    return 0;
}
