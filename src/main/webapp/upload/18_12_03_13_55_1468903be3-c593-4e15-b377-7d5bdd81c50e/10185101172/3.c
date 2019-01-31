#include <stdio.h>
#include <string.h>

int main()
{
    int i,length=0;
    char data1[80],data2[80];
    scanf("%s %s",data1,data2);
    if(strlen(data1)<strlen(data2))
        {
        length=strlen(data1);
        for(i=0;i<length;i++)
            printf("%c%c",data1[i],data2[i]);
        for(i=length;i<strlen(data2);i++)
            printf("%c",data2[i]);
        }
    else
        {
        length=strlen(data2);
        for(i=0;i<length;i++)
            printf("%c%c",data1[i],data2[i]);
        for(i=length;i<strlen(data1);i++)
            printf("%c",data1[i]);
        }
}
