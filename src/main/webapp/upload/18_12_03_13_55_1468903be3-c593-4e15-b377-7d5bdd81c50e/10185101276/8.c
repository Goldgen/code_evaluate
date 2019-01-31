#include <stdio.h>
#include <string.h>
int jud(char a[]){
    int e;
    int co=1;
    for(e=0;e<=strlen(a)/2;e++){
        if(a[e]!=a[strlen(a)-e-1])co=0;
    }
    return co;
}
int main()
{
    char a[100];
    int i=0;
    while(scanf("%c",&a[i])&&a[i]!='\n')i++;
    a[i]='\0';
    if(jud(a))printf("True");
    else printf("False");
    return 0;
}
