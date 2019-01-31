#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char s[100];
    gets(s);
    int m;
    scanf("%d",&m);
    char t[(strlen(s)-m)];
    int i;
    for(i=0;i<(strlen(s)-m);i++)
    {
      t[i]=s[m+i];
    }
    printf("%s",t);




return 0;
}
