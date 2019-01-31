#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str1[1005],str2[1005];
    scanf("%s",str1);
    while(strcmp(str1,"#") != 0){
        scanf("%s",str2);
        char *p1 = str1,*p2 = str2;
        int js = 0;
        while(strstr(p1,p2) != NULL){
            p1 = strstr(p1,p2)+strlen(p2);
            js++;
        }
        printf("%d\n",js);
        scanf("%s",str1);
    }
    return 0;
}
