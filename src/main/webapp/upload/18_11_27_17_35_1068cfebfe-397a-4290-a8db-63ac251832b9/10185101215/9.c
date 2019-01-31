#include<stdio.h>
#include<string.h>//字符串处理的函数
int main (void)
{
    char str1[1001],str2 [1001];
    int i,len_str1,len_str2,len_max,k;
    int a[1001]={0},b[1001]={0},c[1001]={0};
    scanf("%s",str1);
    len_str1=strlen(str1);//检测字符串长度
    for(i=0;i<=len_str1-1;++i)
    a[i]=str1[len_str1-1-i]-'0'; //输出每一个数字
    scanf("%s",str2);
    len_str2=strlen(str2);//检测字符串长度
    for(i=0;i<=len_str2-1;++i)
    b[i]=str2[len_str2-1-i]-'0';//输出每一个数字，得出其数字（由于减了‘0’）
    if(len_str1>len_str2)
    len_max=len_str1;
    else
    len_max=len_str2;
    k=0;
    for(i=0;i<=len_max-1;i++)
    {
    c[i]=(a[i]+b[i]+k)%10;
    k=(a[i]+b[i]+k)/10;
    }
    if(k!=0)
    c[len_max]=1;
	if(c[len_max]==1)
       printf("1");
    for(i=len_max-1;i>=0;--i)
    printf("%d",c[i]);
    return 0;
}