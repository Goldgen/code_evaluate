#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    char s[100];
    int i=0;
    int j;
    if(n<10)
        printf("%d",n);
    else{
    while(n>=10)
    {
        a=n%10;
        s[i]=a+'0';
        i++;
        n=n/10;
    }
    s[i]=n+'0';
    for(j=i;j>=0;j--)
    {
        printf("%c",s[j]);
    }
    }
       return 0;
}