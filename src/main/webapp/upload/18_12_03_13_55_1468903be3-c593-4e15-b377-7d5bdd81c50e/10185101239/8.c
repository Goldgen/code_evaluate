#include <stdio.h>
#include <string.h>

int main()
{
int x,i;
char ch[100];

gets(ch);

x=strlen(ch);

for(i = 0; i <= x/2; i++)
{
if(ch[i] != ch[x-i-1])
{
break;
}
}

if(i> x/2)
printf("True");
else
printf("False");
}
