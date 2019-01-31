#include<stdio.h>
#include<stdlib.h>
int main()
{ int n;
  scanf("%d",&n);
   int i,a[n];
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   int j;
    for(i=1;i<n;i++)
	 for(j=0;j<n-i;j++)
	  if(a[j]>a[j+1])
	  { int t=a[j];
	   a[j]=a[j+1];
	   a[j+1]=t;
	  }
	 for(i=0;i<n;i++)
	 { if(i<n-1)printf("%d ",a[i]);
	  else printf("%d",a[i]);
	 }
	return 0;
}