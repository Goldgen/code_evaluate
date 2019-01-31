#include <stdio.h>
#include <string.h>

void fun(char in[],int n)
{
    char temp[82] = "0";
    temp[0]=in[n-1];
    strcat(temp,in);
    strncpy(in,temp,n);
}

int main(void)
{
    char s1[82];
    char s2[82];
    char s3[82];
    scanf("%s %s",s1,s2);
    strcpy(s3,s2);
    int len1 = strlen(s1),len2 = strlen(s2),js2 = 0;
    if(len1 != len2)
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s3);
    else{
        for(int js1 = 0;js1 < len1;js1++){
            fun(s2,len2);
            if(strcmp(s1,s2) == 0){
                js2++;
                break;
            }
        }
        if(js2 != 0) printf("\"%s\" is a rotation of \"%s\"",s1,s3);
        else printf("\"%s\" is NOT a rotation of \"%s\"",s1,s3);
    }
    return 0;
}
