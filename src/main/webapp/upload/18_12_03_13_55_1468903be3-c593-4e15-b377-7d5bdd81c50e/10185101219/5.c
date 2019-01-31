#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int rotate(char* x1,char* x2)
{
    int test;
    int n=strlen(x1);
    for(int move=0;move<2*strlen(x1);++move)
    {
        test=0;
        if(x2[move]==x1[0]){
                if(x2[(move+test)%n]==x1[test]){
                    test++;
                }
                else
                    return 0;
        }
    }
    return 1;
}
int main()
{
    char s1[100]={'\0'};
    char s2[100]={'\0'};
    int wei1=0,wei2=0;
    while((s1[wei1]=getchar())!=' '){
        wei1++;
    }
    wei1--;
    s1[strlen(s1)-1]=0;
    while((s2[wei2]=getchar())!='\n'){
        wei2++;
    }
    wei2--;
    s2[strlen(s2)-1]=0;
    if(wei1!=wei2){
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
    }
    else
    {
    if(rotate(s1,s2))
        printf("\"%s\" is a rotation of \"%s\"",s1,s2);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
    }
    return 0;
}
