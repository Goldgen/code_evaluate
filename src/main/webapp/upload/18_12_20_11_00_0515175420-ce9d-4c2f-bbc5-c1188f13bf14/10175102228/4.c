#include<stdio.h>
#include<stdlib.h>
 char a[100];
int main()
{   char c;

     int cnt=0;
    while(scanf("%c",&c)&&c!='?')
    {
        a[cnt++]=c;
    }
    int i;
    for(i=cnt-1;i>=0;i--)
        printf("%c",a[i]);
    return 0;
}
