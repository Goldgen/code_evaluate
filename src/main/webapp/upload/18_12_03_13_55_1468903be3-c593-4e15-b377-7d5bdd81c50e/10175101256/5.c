#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[100],s2[100],s[100];
    scanf("%s %s",s1,s2);
    int t=strlen(s2);
    for(int i=0;i<=t;i++){
        s[i]=s2[i];
    }
    int y=0;
    for(int i=0;i<t;i++){
        if(strcmp(s1,s2)){
               char x=s2[t-1];
            for(int j=t-1;j>0;j--){
                s2[j]=s2[j-1];
            }
                s2[0]=x;
        }
        else{
            y++;
            break;
        }
    }
    printf("\"%s\" is ",s1);
    if(!y)
        printf("NOT ");
        printf("a rotation of \"%s\"\n",s);
}

