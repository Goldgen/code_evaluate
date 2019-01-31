#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char a[200];
    char b[200];
    char c[200];
    scanf("%s",a);
    scanf("%s",b);
    strcpy(c,a);
    strcat(a,c);
    if(strstr(a,b)!=NULL&&strlen(c)==strlen(b))
        printf("\"%s\" is a rotation of \"%s\"",c,b);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"",c,b);
 return 0;
}
