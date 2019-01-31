#include<stdio.h>

int main(void)
{
    char ch1,ch2;
    scanf("%c",&ch1);
    ch2=ch1+'a'-'A';
    if(ch1<='Z'&&ch1>='A')
      printf("%c",ch2);
    else
      printf("ERROR");
    return 0;

}
