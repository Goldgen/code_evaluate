#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,num=0;
    char list_1[80],list_2[80];
    while(gets(list_1))
    {
        a=strlen(list_1);
        for(b=0;b<a;b++)
        {
            list_2[b]=list_1[a-1-b];
        }
        list_2[a]='\0';
    }
    for(b=0;b<a;b++)
    {
        if(list_1[b]=list_2[b])
        {
            num++;
        }
    }
    if(num==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
   return 0;
}
