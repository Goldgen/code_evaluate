#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100]=" ";
    char str[81];
    gets(str);
    char *a[81];
    int num[81];
    int n=0,maxl=0,maxp=0;
    char *find=strtok(str,s);
    do
    {
        a[n]=find;
        num[n]=strlen(find);
        n++;
        find = strtok(NULL,s);
    }
    while(find);
     for(int i=0;i<n;i++)
     {
        if (num[i]>maxl)
        {
            maxl=num[i];
            maxp=i;
        }
    }
    printf("%s\n",a[maxp]);
    return 0;
}

