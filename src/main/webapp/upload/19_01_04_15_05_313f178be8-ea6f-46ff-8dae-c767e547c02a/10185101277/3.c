#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int i=0,j=0;
void f(char *p,char *big,char *sml)
{
        scanf("%s %s",(big+1),sml);
        int len=strlen(sml);
        while(p=strstr(p,sml)){
            i++;
            p+=len;
        }
    printf("%d\n",i);
}
int main()
{
    char big[1010];
    char sml[1010];
    char *p=big;
    while(1){
    scanf("%c",&big[0]);
    if(big[0]=='#') return 0;
    f(p,big,sml);
    }
    return 0;
}
