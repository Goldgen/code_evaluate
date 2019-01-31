#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    int e=0,i=0,co=1,times=0,c=-1;
    gets(a);
    scanf("%s",b);
    while(e<=strlen(a)-strlen(b)+1){
        if(a[e]==b[0])
        for(i=1;i<strlen(b);i++){
            if(a[e+i]!=b[i])co=0;
        }
        else co=0;
        if(co==1){
            if(times==0)c=e;
            times++;
        }
        e++;
        co=1;
    }
    printf("%s: %d time(s), first at %d",b,times,c);

    return 0;
}
