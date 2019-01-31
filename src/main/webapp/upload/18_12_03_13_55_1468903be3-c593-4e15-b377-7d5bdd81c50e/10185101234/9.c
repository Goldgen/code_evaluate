#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
     char str1[90], str2[90], *p1, *p2,*p;
    int sum=0,position;
    gets(str1);
    gets(str2);
    p1=str1;
    p2=str2;

    while(*p1 != '\0')
    {
        if(*p1 == *p2)
        {
            while(*p1 == *p2 && *p2 != '\0')
            {
                p1++;
                p2++;
            }
        }
        else
            p1++;
        if(*p2 == '\0')
            sum++;
        p2=str2;
    }
    printf("%s: %d time(s), ", str2,sum);
     p=strstr(str1,str2);
    if (p == NULL)
    {
		printf("-1");
        //position = p - str1;
        //printf("first at %d", position);
    }
    else
    {
		position = p - str1;
        printf("first at %d", position);
    }
    getchar();

}