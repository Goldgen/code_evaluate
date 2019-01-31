#include <stdio.h>
#include <string.h>
int main()
{char sx[81],dx[81]={0};
int n;
gets(sx);
for(int i=0;i<81;i++)
if(sx[i]=='\0')
{n=i;
break;}
for(int j=0;j<n;j++)
{dx[j]=sx[n-1-j];}
if(strcmp(dx,sx)==0)
    printf("True");
else printf("False");
return 0;}