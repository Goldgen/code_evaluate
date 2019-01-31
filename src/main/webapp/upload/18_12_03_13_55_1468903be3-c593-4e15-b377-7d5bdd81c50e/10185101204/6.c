#include <stdio.h>
int main()
{char num[9];
long long int n,t=0,a;
scanf("%s",num);
for(int i=0;i<9;i++)
if(num[i]=='\0')
{n=i;
break;}
for(long long int j=n-1,k=1;j>=0;j--,k*=16)
{if(num[j]<='9')
a=num[j]-'0';
else if(num[j]>='a')
a=num[j]-'a'+10;
else a=num[j]-'A'+10;
t+=a*k;}
printf("%lld",t);
return 0;}
