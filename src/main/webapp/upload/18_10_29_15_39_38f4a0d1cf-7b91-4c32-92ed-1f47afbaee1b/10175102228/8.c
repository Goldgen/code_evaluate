#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,m,i;
 scanf("%d%d",&n,&m);
  int cnt=0,de=1;
   for(i=0;i<9;i++)
   {
       if(n/de)cnt++;
       else break;
	   de=de*10;
	   
    }
    if((n-999999999)>0)cnt++;
  printf("%d ",cnt);
  int a[10];
   for(i=0;i<cnt;i++)
   { a[cnt-1-i]=n%10;
      n=(n-a[cnt-1-i])/10;
   }
   m=m%cnt;
   for(i=cnt-m;i<cnt;i++)
    printf("%d",a[i]);
   for(i=0;i<cnt-m;i++)
    printf("%d",a[i]);
  return 0;

}