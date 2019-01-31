#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char a[81]={'\0'};
    fgets(a,81,stdin);
    for(int i=0;i<8;++i){
    a[i]=tolower(a[i]);
    if(a[i]=='a'||a[i]=='b'||a[i]=='c')
        printf("2");
    else if(a[i]=='d'||a[i]=='e'||a[i]=='f')
        printf("3");
    else if(a[i]=='g'||a[i]=='h'||a[i]=='i')
        printf("4");
    else if(a[i]=='j'||a[i]=='k'||a[i]=='l')
        printf("5");
    else if(a[i]=='m'||a[i]=='n'||a[i]=='o')
        printf("6");
    else if(a[i]=='p'||a[i]=='q'||a[i]=='r'||a[i]=='s')
        printf("7");
    else if(a[i]=='t'||a[i]=='u'||a[i]=='v')
        printf("8");
    else if(a[i]=='w'||a[i]=='x'||a[i]=='y'||a[i]=='z')
        printf("9");
    }
    return 0;
}
