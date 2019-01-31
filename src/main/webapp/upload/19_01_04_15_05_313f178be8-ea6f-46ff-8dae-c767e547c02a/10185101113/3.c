#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[1010],str2[1010];
    while(scanf("%s",str1))
    {
        int n=0;
        if(strcmp(str1,"#")==0)
            break;
        else
        {
            scanf("%s",str2);
            int i,j;
            for(i=0;i<strlen(str1);i++)
            {
                if(str1[i]==str2[0])
                {
                    int flag=0;
                    for(j=0;j<strlen(str2);j++)
                    {
                        if(str1[i+j]==str2[j])
                            flag++;
                        else
                            break;
                    }
                    if(flag==strlen(str2))
                    {
                        n++;
                        i=i+strlen(str2)-1;
                    }

                }
                else
                    continue;

            }
            printf("%d\n",n);
        }
    }
    return 0;
}