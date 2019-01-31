#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int a[100];
int cnt=0;
void solve(int st,int ed)
{ int i;
for(i=st;i<=ed;i++)
 if(isgraph(i))//判断是否为可打印字符
     a[cnt++]=i;

if(cnt==0)printf("NONE");
 for(i=0;i<cnt;i++)
  {
    if(i<cnt-1)printf("%-8d%c\n",a[i],a[i]);
     else
     printf("%-8d%c",a[i],a[i]);
   }

}
int main()
{ int st,ed;
scanf("%d %d",&st,&ed);
solve(st,ed);
return 0;

}
