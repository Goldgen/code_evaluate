#include <stdio.h>
#include <string.h>
int main()
{
    char s1[82],s2[82],temp[82];
    int len1,i,j;
    scanf("%s %s",s1,s2);
    len1=strlen(s1);
    int out=0;
    if(strcmp(s1,s2)==0){
        printf("\"%s\" is a rotation of \"%s\"",s1,s2);
        out=1;
    }
    for(i=1;i<len1;i++){
        for(j=0;j<len1-i;j++){
            temp[j]=s1[j+i];
        }
        for(j=len1-i;j<len1;j++){
            temp[j]=s1[j-(len1-i)];
        }
        temp[len1]='\0';
        if(strcmp(temp,s2)==0){
            printf("\"%s\" is a rotation of \"%s\"",s1,s2);
            out=1;
            break;
        }
    }
    if(out==0)
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
    return 0;
}
