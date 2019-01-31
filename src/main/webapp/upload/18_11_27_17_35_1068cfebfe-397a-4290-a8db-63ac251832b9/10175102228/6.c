#include<stdio.h>
#include<stdlib.h>
#define N 1000
int check(int a[],int n,int x)
{ int i;
    for(i=0;i<n;i++)
    if(a[i]==x)return i;
    return -1;
}
int main()
{ int n;
 scanf("%d",&n);
 int a[n];
  int i;
   for(i=0;i<n;i++){
         scanf("%d",&a[i]);
      }
    int x;
    scanf("%d",&x);
    int tag=check(a,n,x);
    if(tag==-1)printf("ERROR");
     else
    { for(i=tag;i<n-1;i++)
      {  a[i]=a[i+1];
      }
       for(i=0;i<n-1;i++)
	   { if(i<n-2)printf("%d ",a[i]);
		else printf("%d",a[i]);
	   }
    }
    return 0;
}
