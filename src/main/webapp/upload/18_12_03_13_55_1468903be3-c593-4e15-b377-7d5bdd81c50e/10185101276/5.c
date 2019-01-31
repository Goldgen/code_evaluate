#include <stdio.h>
#include <string.h>
int main()
{
    char a[90]={0},b[90]={0},c[90]={0},d[90]={0};
    scanf("%s %s",a,b);
    int co=1,i=0,e;
    for(e=0;e<90;e++)d[e]=a[e];
    if(strlen(a)==strlen(b)){
        while (co==1){
        for(e=0;e<strlen(a);e++){
            if(a[e]!=b[e]){
                co=0;
                break;
            }
        }
        for(e=0;e<strlen(a);e++)c[e]=a[e];
        if(co==0){
            for(e=0;e<strlen(a);e++){
                a[(e+1)%strlen(a)]=c[e];
            }
        }
        else {
            printf("\"%s\" is a rotation of \"%s\"",d,b);
            break;
        }
        i++;
        co=1;
        if(i>strlen(a)&&i>strlen(b)){
            printf("\"%s\" is NOT a rotation of \"%s\"",d,b);
            break;
        }
      }
    }
    else printf("\"%s\" is NOT a rotation of \"%s\"",d,b);
    return 0;
}
