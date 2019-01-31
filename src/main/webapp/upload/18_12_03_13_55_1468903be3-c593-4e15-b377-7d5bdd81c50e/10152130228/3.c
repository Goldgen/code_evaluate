#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[88], s2[88], s3[222];
    scanf("%s%s", s1, s2);
    int len1, len2;
    len1 = strlen(s1);
    len2 = strlen(s2);
    if(len1>len2){
        for(int i=0; i<len2; i++){
            s3[i*2] = s1[i];
            s3[i*2+1] = s2[i];
        }
        for(int i=0; i<len1-len2; i++)
            s3[len2*2+i] = s1[len2+i];
    }
    else if(len1==len2){
        for(int i=0; i<len1; i++){
            s3[i*2] = s1[i];
            s3[i*2+1] = s2[i];
        }
    }
    else{
        for(int i=0; i<len1; i++){
            s3[i*2] = s1[i];
            s3[i*2+1] = s2[i];
        }
        for(int i=0; i<len2-len1; i++)
            s3[len1*2+i] = s1[len1+i];
    }
    //printf("%s", s3);
    for(int i=0; i<len1+len2; i++){
        printf("%c", s3[i]);
    }
    return 0;
}
