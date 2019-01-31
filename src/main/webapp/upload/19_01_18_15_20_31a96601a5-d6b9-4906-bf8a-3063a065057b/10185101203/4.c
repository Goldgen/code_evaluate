#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
if(c>=65 && c<=90)
{
c=c+32;
printf("%c",c);
}
else
printf("ERROR");
}
