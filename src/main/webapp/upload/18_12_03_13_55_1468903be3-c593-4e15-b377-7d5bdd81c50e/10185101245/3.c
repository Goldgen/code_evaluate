#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str1[81],str2[81],str3[161];
    scanf("%s",str1);
    scanf("%s",str2);
    int i = 0,j=0;
    while(str1[i]!='\0'&&str2[i]!='\0')      //???????????\0??????????i?????????j?j+1???
    {
        str3[j]=str1[i];
        j++;
        str3[j]=str2[i];
        j++;
        i++;
    }
    str3[j]='\0';
    if(str2[i]=='\0'){
    while(str1[i]!='\0')      //??\0?????????
    {
        str3[j]=str1[i];
        j++;
        i++;
    }
    }
    else
    while(str2[i]!='\0')
    {
        str3[j]=str2[i];
        j++;
        i++;
    }
    str3[j]='\0';
    printf("%s",str3);
    return 0;
}