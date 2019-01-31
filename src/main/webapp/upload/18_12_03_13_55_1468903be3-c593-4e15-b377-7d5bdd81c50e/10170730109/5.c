#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1000],str2[1000],str3[1000];
    scanf("%s %s",str1,str2);
    strcpy(str3,str1);
    strcat(str1,str3);
    if(strstr(str1,str2)!=NULL&&strlen(str2)==strlen(str3)) printf("\"%s\" is a rotation of \"%s\"",str3,str2);
    else printf("\"%s\" is NOT a rotation of \"%s\"",str3,str2);
    return 0;
}
