#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char a[1000];
    char b[1000];
    while(scanf("%s%s",a,b)!=EOF)
    {
        if(a[0]=='#')
            return 0;
        else
       {

       int i=0;
         int j=0;
         int flag=0;
         int k;
        for(i=0;i<strlen(a);i=i+strlen(b))
        {
            k=i;
            for(j=0;j<strlen(b);j++)
            {
                if((a[k]==b[j])&&(j<strlen(b)-1))
                {
                    k++;
                }
                else if((a[k]==b[j])&&(j==strlen(b)-1))
                {
                    flag++;
                }
                else
                {
                    continue;
                }

            }


        }

      printf("%d\n",flag);
       }
    }
    return 0;
}
