#include <stdio.h>
int main()
{int t,i,j;
char a,m,n=0,h,y;
h='9';
char ff[1000]={'0'},ss[1000]={'0'};
a=getchar();
for(i=1;a!='\n';i++)
{ff[i]=a;
a=getchar();}
a=getchar();
for(j=1;a!='\n';j++)
{ss[j]=a;
a=getchar();}
t=i>j?i:j;
i--;j--;
int tt[t];
for(int k=t-1;k>=0;k--)
{if(i==0||j==0)
{if(i>j)
{m=n+ff[i];
i--;
if(m<=h)
n=0;
else
{m=m-10;
n=1;}}
else if(i<j)
{m=n+ss[j];
j--;
if(m<=h)
n=0;
else
{m=m-10;
n=1;}}
else m=n+'0';}
else{m=n+ff[i]+ss[j]-'0';
i--;j--;
if(m>h)
{m=m-10;
n=1;}
else n=0;}
tt[k]=m;}
y='0';
if(tt[0]>y)
printf("%c",tt[0]);
for(int p=1;p<t;p++)
printf("%c",tt[p]);
return 0;
}