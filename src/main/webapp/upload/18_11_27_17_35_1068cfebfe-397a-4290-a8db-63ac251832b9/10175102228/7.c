#include<stdio.h>
#include<stdlib.h>
#define N 1000
int a[N];
int main()
{ int n;
scanf("%d",&n);
int i;
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
int x;
scanf("%d",&x);
int b[1000],cnt=0;
for(i=0;i<n;i++)
 if(a[i]==x)b[cnt++]=i;
 if(cnt==0)printf("ERROR");
 else
 { for(i=0;i<cnt;i++)
    { if(i<cnt-1)printf("%d ",b[i]);
       else printf("%d",b[i]);
    }
 }
return 0;

}
