#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>
#include<string.h>

void lace(const char *,const char*,char *,int);

int main( ){
    char s1[90],s2[90];
    char *s;int len;
    scanf("%s %s",s1,s2);
    len=strlen(s1)+strlen(s2)+1;
    s=(char *)malloc(len*sizeof(int));
    lace(s1,s2,s,len);
    printf("%s",s);
    free(s);
    return 0;
}

void lace(const char *s1,const char*s2,char *s,int len){
    for(int i=0;i<len-1;i++){
        if(i%2&&s2[(i-1)/2]!=0)
            s[i]=s2[(i-1)/2];
        else if(i%2==0&&s1[i/2]!=0)
            s[i]=s1[i/2];
        else if(s2[(i-1)/2]==0){
            for(int j=i;j<len-1;j++)
            s[j]=s1[j-i/2];
            break;
        }
        else{
            for(int j=i;j<len-1;j++)
            s[j]=s2[j-(i+1)/2];
            break;
        }
    }

    s[len-1]=0;

}
