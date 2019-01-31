#include <stdio.h>
int main()
{char m,ph[80],ch[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
gets(ph);
for(int i=0;i<8;i++)
{m=ph[i]-'a';
printf("%d",ch[m]);}
return 0;}