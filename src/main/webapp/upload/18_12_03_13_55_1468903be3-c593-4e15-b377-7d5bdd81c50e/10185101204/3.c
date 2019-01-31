#include <stdio.h>
int main()
{char first[81],last[81];
scanf("%s %s",first,last);
for(int i=0;i<81;i++)
{if(last[i]=='\0')
{for(int j=i;first[j]!='\0';j++)
printf("%c",first[j]);
break;}
else if(first[i]=='\0')
{for(int j=i;last[j]!='\0';j++)
printf("%c",last[j]);
break;}
else printf("%c%c",first[i],last[i]);}
return 0;}