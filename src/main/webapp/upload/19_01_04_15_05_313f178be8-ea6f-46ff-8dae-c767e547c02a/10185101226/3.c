#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int num(char str[1000],char srr[1000])
{
    int i,j,flag,num;
    for(i=0;str[i]!='\0';++i)
    {
        for(j=0;srr[j]!='\0';++j)
            if(str[i]==srr[j])
                {
                    flag=0;
                    break;
                }
            else
                flag=1;
    }
    if(flag=1)
        return 0;
    else
        {
            num=strlen(str)/strlen(srr);
            return num;
        }
}
int main()
{
    int i;
    char str[1000],srr[1000];
    while(scanf("%s",str)!='#')
    {
        scanf("%s %s",str[1000],srr[1000]);
        printf("%d",num(str,srr));
    }

    return 0;
}
