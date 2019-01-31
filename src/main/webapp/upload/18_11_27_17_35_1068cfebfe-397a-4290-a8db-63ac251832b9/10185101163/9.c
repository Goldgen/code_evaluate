#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch1[100],ch2[100],sum[100];
    int i;
    scanf("%100s %100s",&ch1,&ch2);
    for(i=0;i<100;i++)
      if(ch1[i]>48&&ch2[i]>48)
        sum[i]=ch1[i]+ch2[i]-48;
    printf("%s",sum);
    return 0;
}
