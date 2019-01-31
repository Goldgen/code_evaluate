#include <string.h>
#include <stdio.h>
#define N 100

int main(int argc, char const *argv[])
{
    char arr[N] = {};
    gets(arr);
    char brr[N] = {};
    gets(brr);
    int len1,len2,i = 0,j = 0;
    len1 = strlen(arr);
    len2 = strlen(brr);
    int len = len1>len2?len1:len2;     
    int num1[len]; 
    int num2[len];
    for (i = 0; i < len; i++)
    {
        num1[i] = i<len1 ? arr[len1-i-1]-'0':0;
    }
    for (j = 0; j < len; j++)
    {
        num2[j] = j<len2 ? brr[len2-j-1]-'0':0;
    }
    int sum[len]; 
    int flag=0; 
    for (i = 0; i < len; i++)
    {
        sum[len-1-i] = (num1[i]+num2[i]+flag)%10;
        flag = (num1[i]+num2[i]+flag)/10;
    }
    if (flag == 1) printf("1"); 
    for (i = 0; i < len; i++)
    {
        printf("%d",sum[i]);
    }
    return 0;
}
