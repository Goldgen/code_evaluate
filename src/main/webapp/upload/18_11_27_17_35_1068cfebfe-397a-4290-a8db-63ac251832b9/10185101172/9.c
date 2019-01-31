#include <stdio.h>
#include <string.h>

int main()
{
    int i=0;
    char data1[100];
    scanf("%s",data1);
    char data2[100];
    scanf("%s",data2);
    char ans[100];
    int a[100];
    int b[100];
    for(i=0;i<strlen(data1);i++)
    {
        a[i]=data1[i]-'0';
        b[i]=data2[i]-'0';
    }
    for(i=strlen(data1)-1;i>=0;i--)
    {
        ans[i]=a[i]+b[i];
    }
    for(i=strlen(data1)-1;i>=0;i--)
    {
        if(ans[i]>=10)
        {ans[i]-=10;
        ans[i-1]++;}
    }
    for(i=0;i<strlen(data1);i++)
         printf("%d",ans[i]);
  return 0;
}
