#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void trans(char a);
int main()
{
  char s[82];
  gets(s);
  for(int i=0;i<8;i++)
    trans(s[i]);

	return 0;
}
void trans(char x){

if(x>=97&&x<=99)
    printf("2");
else if(x>=100&&x<=102)
    printf("3");
else if(x>=103&&x<=105)
    printf("4");
else if(x>=106&&x<=108)
    printf("5");
else if(x>=109&&x<=111)
    printf("6");
else if(x>=112&&x<=115)
    printf("7");
else if(x>=116&&x<=118)
    printf("8");
else if(x>=119&&x<=122)
    printf("9");
}
