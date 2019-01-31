#include <stdio.h>
#include <stdlib.h>
#define N 100
int change(char a)
{
switch(a)
{
case '0':return 0;break;
case '1':return 1;break;
case '2':return 2;break;
case '3':return 3;break;
case '4':return 4;break;
case '5':return 5;break;
case '6':return 6;break;
case '7':return 7;break;
case '8':return 8;break;
case '9':return 9;break;
}
}
void main()
{
int a[N],b[N],result[N];
char temp1[N];
char temp2[N];
scanf("%s",temp1);
scanf("%s",temp2);
for(int i=0;i<N;i++)
{
a[i]=change(temp1[i]);
b[i]=change(temp2[i]);
}
int flag=0;
for(int j=(N-1);j>=0;j--)
{
if((a[j]+b[j]+flag)>=10)
{
result[j]=a[j]+b[j]+flag-10;
flag=1;
}
else
{
result[j]=a[j]+b[j]+flag;
flag=0;
}
}
if((a[0]+b[0])>=10) {printf("1");}
for(int i=0;i<N;i++) printf("%d",result[i]);
    return 0;
}
