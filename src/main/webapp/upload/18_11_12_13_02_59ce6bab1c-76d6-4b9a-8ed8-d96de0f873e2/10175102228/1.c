#include<stdio.h>
#include<stdlib.h>
void solve(int n)
{  int i;
  for(i=1;i<=n;i++)
  { if(i*n<10)printf("%d * %d =  %d",i,n,i*n);
   else printf("%d * %d = %d",i,n,i*n);
    if(i!=n)printf(" "); 
  } 
 
}
int main()
{ int n;
 scanf("%d",&n);
 int i;
 for(i=1;i<=n;i++)
 { printf(" ");
	 solve(i);
  if(i!=n)printf("\n");
 }
	return 0;
}