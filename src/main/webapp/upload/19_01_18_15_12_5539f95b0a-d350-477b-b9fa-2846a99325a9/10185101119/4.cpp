#include <stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
    if(ch>=65&&ch<97)
      printf("%c",ch+'a'-'A');
    else
      printf("ERROR");
	return 0;
 } 