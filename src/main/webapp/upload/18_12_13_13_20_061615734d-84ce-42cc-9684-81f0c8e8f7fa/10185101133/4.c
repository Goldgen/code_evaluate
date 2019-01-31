#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int i=0;
    scanf("%d",&t);
    while(i<t){
        char str[51];
        char *p=str;
        scanf("%s",str);
        while(*p != '\0'){
            if((*p) == 'Z')
                *p='A';
            else
                (*p)++;
            p++;
        }
        printf("case #%d: %s\n",i,str);
        i++;
    }
    return 0;
}
