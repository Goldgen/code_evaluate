#include<stdio.h>
#include<string.h>
int main()
{
    int m,j=0;
    char str[20] = {'\0'};
    scanf("%d",&m);
    while(m!= 0)
    {
        str[j]=m%10+48;
        m/=10;
        j++;
    }
    for(j--;j>=0;j--)
        putchar(str[j]);
}