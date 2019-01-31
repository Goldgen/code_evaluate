#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
int i=0;
char a[100];
int k,j=0;
gets(a);
k=strlen(a);
    for(;i<=k-1;i++)
    {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
         j=1;
    else
        break;
    }
if(j==1)
    {printf("yes");}
else
    {printf("no");}
    return 0;
}
