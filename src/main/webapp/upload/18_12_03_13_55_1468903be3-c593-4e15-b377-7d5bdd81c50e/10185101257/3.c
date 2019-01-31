#include <stdio.h>
#include <string.h>
int main(){
    char s1[80],s2[80],laceString[160];
    int len1,len2,same,arry;
    scanf("%s%s",s1,s2);
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1>len2){
        same=len2;
        arry=1;
    }
    else{
        same=len1;
        arry=2;
    }
    for(int i=0;i<2*same;i=i+2){
        laceString[i]=s1[i/2];
        laceString[i+1]=s2[i/2];
    }
    if(arry==1)
        for(int j=2*same;j<len1+len2;++j)
            laceString[j]=s1[j-same];
    else
        for(int j=2*same;j<len1+len2;++j)
            laceString[j]=s2[j-same];
    printf("%s",laceString);
    return 0;
}
