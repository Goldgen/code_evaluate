#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int k=0; k<t; k++){
        char a[55];
        scanf("%s", a);
        int len;
        len = strlen(a);
        for(int i=0; i<len; i++){
            if(a[i]=='Z') a[i]='A';
            else a[i]=a[i]+1;
        }
        printf("case #%d: %s\n", k, a);
    }
    return 0;
}
