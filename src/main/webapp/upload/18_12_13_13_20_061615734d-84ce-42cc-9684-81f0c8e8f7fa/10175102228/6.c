#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rotate(int* p, int n, int m)
{ int *r=p;
  int a=n-m;
  p+=a;
 while(m--)
 { printf("%d ",*p);
     p++;
 }
  while(a--)
  { printf("%d",*r);
    r++;
    if(a>0)printf(" ");
  }
}
int main()
{ int n,m;
scanf("%d%d",&n,&m);
int a[n];
int i;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
rotate(a,n,m);
return 0;
}
