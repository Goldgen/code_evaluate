#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1001];
    char str2[1001];
    while(scanf("%s %s",str1,str2)&&str1!="#")
{
    int i =strlen(str2);
    int j = 0,k = 0,count =0;
    for(j=0;j<strlen(str1);j++)
        {
            k = 0;
            if(str1[j]==str2[k])
           while(1)
            {
                k++;
                j++;
                if(i==1)
                {
                    count++;
                    break;
                }
                if(str1[j]!=str2[k])
                {
                    break;
                }
                if(k==i-1)
                {
                    count++;
                    break;
                }

            }
        }
    printf("%d\n",count);
}

        return 0;
}