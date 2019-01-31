#include <ctype.h>
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
 int a[30];
int *p=a;
int m,n;
scanf("%d",&n);
scanf("%d",&m);
for(p=a;p<a+n;)
scanf("%d",p++);
p=a;
move(p,n,m);
for(p=a;p<a+n-1;)
printf("%d ",*p++);
printf("%d",*p++);
}
void move(int *p, int n, int m)
{
int i, temp;
if(m==0) return 0;
if (m > 1)
for (i = 0; i < m; i ++)
move(p, n, 1);
else
{
temp = p[n-1];
for (i = n-1; i > 0; i --)
p[i] = p[i-1];
p[0] = temp;
}
}
