#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    char s1[10000];
    char s2[10000];
    int num1[10000];
    int num2[10000];
    memset(num1,0,sizeof(num1));
    memset(num2,0,sizeof(num2));
    int i,j;
    scanf("%s",s1);
    scanf("%s",s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    for(i=len1-1,j=0;i>=0;i--){
        num1[j]=s1[i]-48;
        j++;
    }
    for(i=len2-1,j=0;i>=0;i--){
        num2[j]=s2[i]-48;
        j++;
    }
    for(i=0;i<(len2>len1?len2:len1);i++){
        num1[i]+=num2[i];
        if(num1[i]>9)
        {
            num1[i+1]+=1;
            num1[i]-=10;
        }

    }
    if(num1[i])
       for(j=i;j>=0;j--)
        printf("%d",num1[j]);
    else
        for(j=i-1;j>=0;j--)
        printf("%d",num1[j]);
	return 0;
}
