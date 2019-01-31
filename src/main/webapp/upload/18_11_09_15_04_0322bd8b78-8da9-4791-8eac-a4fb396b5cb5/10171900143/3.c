#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[100];int ret=0;
    gets(a);
    for(int i=0;i<strlen(a);i++){
            a[i]=tolower(a[i]);
        if(a[i]=='a'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='e')
        {
            ret=1;
            break;
        }
    }
    if(ret==1)printf("yes");else printf("no");
    return 0;
}

