#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr1[100],arr2[100];
    scanf("%s %s",&arr1,&arr2);
    int num1[100]={0},num2[100]={0};
    int sum[100]={0};
    int len1=strlen(arr1),len2=strlen(arr2);
    int i,j=0;
    for(i=len1-1;i>=0;i--){
        num1[j++]=arr1[i]-'0';
    }
    j=0;
    for(i=len2-1;i>=0;i--){
        num2[j++]=arr2[i]-'0';
    }
    int max=(len1>len2)?len1:len2;
    for(i=0;i<max;i++){
        sum[i]= num1[i]+num2[i];
    }

    for(i=0;i<max;i++){
        if(sum[i]>=10){
            sum[i+1]+=1;
            sum[i]-=10;
        }
    }
    if(sum[max]!=0)
        printf("%d",sum[max]);
    for(i=max-1;i>=0;i--){
        printf("%d",sum[i]);
    }
    return 0;
}
