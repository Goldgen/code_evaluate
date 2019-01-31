#include<stdio.h>
#include<stdlib.h>
int main()
{ int n;
scanf("%d",&n);
int i;
int a[n];
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
    }
int x=a[0];
int l1=1,cnt=1;
for(i=1;i<n;i++)
  { if(a[i]==x)cnt++;
    else
    { if(l1<cnt)l1=cnt;
        x=a[i];
      cnt=1;
     }
  }
  if(l1<cnt)l1=cnt;
  printf("%d",l1);
  return 0;

}