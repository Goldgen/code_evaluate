#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    char s[55];
    char *p;

    getchar();
    for(i=0;i<t;i++){
        p=&s;
        gets(s);
        for(j=0;j<strlen(s);j++){
            if((*p)=='Z')
                *p='A';
            else
                (*p)++;
            p++;
        }
        printf("case #%d: %s\n",i,s);
    }
    return 0;
}
