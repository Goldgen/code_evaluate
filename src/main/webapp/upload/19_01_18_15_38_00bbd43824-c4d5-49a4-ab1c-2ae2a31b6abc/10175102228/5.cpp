#include<stdio.h>
#include<stdlib.h>
int main()
{ int aa[8],i,sum=0,sum2=0;
for(i=0;i<3;i++)
  { scanf("%d",&aa[i]);
     sum+=aa[i];
  }
  for(i=3;i<6;i++)
  { scanf("%d",&aa[i]);
     sum+=aa[i];
  }
  for(i=6;i<8;i++)
  { scanf("%d",&aa[i]);
     sum+=aa[i];
  }
  int a[8];
  char c[5];
  scanf("%d%c%d%c%d",&a[0],&c[0],&a[1],&c[1],&a[2]);
   scanf("%d%c%d%c%d",&a[3],&c[2],&a[4],&c[3],&a[5]);
  scanf("%d%c%d",&a[6],&c[4],&a[7]);
   sum2=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7];
   printf("%d\n",sum);
   printf("%d",sum2);
   return 0;
}
