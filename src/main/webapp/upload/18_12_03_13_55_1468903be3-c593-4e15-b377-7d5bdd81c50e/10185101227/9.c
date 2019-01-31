#include<stdio.h>
#include<string.h>

int main (void)
{
    char str1[81];
    char str2[81];
    gets(str1);
    scanf("%s",str2);
    int l = strlen(str2),i = 0,j = 0,k = 1,n = 0,firstplace = -1;
    for(j=0;j<strlen(str1)-l+1;j++)
    {
        k = 1;
        for(i=0;i<l;i++)
        {
            if(str1[i+j]!=str2[i])
                k = 0;
        }
        if (k == 1)
            {
                n++;
                if(firstplace==-1)
                    firstplace = j;
            }
    }
    printf("%s: %d time(s), first at %d",str2,n,firstplace);
}
