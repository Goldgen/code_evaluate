#include <stdio.h>
#include <string.h>
int main()
{char mm[81]={0},nn[81]={0};
int m,n,t=0,f=0;
gets(mm);
gets(nn);
for(int i=0;i<81;i++)
if(nn[i]=='\0')
{n=i;
break;}
for(int i=0;i<81;i++)
if(mm[i]=='\0')
{m=i;
break;}
for(int j=0;j<=m-n;j++)
{for(int x=j,k=0;k<=n;k++)
{if(k==n)
{t++;
if(t==1)
f=x-n;}
else
{if(mm[x]==nn[k])
x++;
else
break;}}}
if(t==0)
printf("%s: %d time(s), first at -1",nn,t);
else
printf("%s: %d time(s), first at %d",nn,t,f);
return 0;}