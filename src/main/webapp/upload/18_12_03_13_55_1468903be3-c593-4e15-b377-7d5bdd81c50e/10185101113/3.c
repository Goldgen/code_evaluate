#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[80],ch2[80],ch3[160];
    int i=0,j=0;
    scanf("%s",ch1);
    scanf("%s",ch2);
    while (ch1[i]!='\0'&&ch2[i]!='\0')
    {
        ch3[j]=ch1[i];
        j++;
        ch3[j]=ch2[i];
        j++;
        i++;
    }
    printf("%s",ch3);
    if(ch1[i]=='\0')
    {
        while(ch2[i]!='\0')
        {
            printf("%c",ch2[i]);
            i++;
        }
    }
    else
    {
        while(ch1[i]!='\0')
        {
            printf("%c",ch1[i]);
            i++;
        }
    }
    return 0;
}
