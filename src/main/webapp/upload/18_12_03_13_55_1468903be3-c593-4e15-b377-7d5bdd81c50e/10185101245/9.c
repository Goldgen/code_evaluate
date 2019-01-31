#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[81];
    gets(str1);
    char str2[81];
    char address[81]={'\0'};
    int number = 0;
    gets(str2);
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
                    j--;
                    address[number]=j;
					number++;
                    break;
                }
                if(str1[j]!=str2[k])
                {
                    j -=k;                       
                    break;
                }
                if(k==i-1)
                {
                    count++;
                    j = j-k;
                    address[number]=j;
                    number++;                         
                    break;
                }

            }
        }
        if(count==0)
            address[0]=-1;
    printf("%s: %d time(s), first at %d",str2,count,address[0]);

        return 0;
} 