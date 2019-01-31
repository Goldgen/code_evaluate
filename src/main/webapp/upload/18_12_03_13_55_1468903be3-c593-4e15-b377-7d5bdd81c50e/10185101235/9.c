#include<stdio.h>
#include<string.h>

int main (void)
{
    char str1[81];
    char str2[81];
    gets(str1);
    scanf("%s",str2);
    int len = strlen(str2);
    int i = 0;
    int j = 0;
    int checker = 1;
    int time = 0;
    int firstplace = -1;
    for(j=0;j<strlen(str1)-len+1;j++)
    {
        checker = 1;
        for(i=0;i<len;i++)
        {
            if(str1[i+j]!=str2[i])
                checker = 0;
        }
        if (checker == 1)
            {
                time++;
                if(firstplace==-1)
                    firstplace = j;
            }
    }
    printf("%s: %d time(s), first at %d",str2,time,firstplace);
}
