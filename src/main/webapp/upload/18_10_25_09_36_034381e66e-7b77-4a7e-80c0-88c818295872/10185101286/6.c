#include<stdio.h>
int main()
{
 int n,i,j,l;
 scanf("%d",&n);
 if(n==4)
  printf("*\n**\n* *\n****");
 else {
 printf("*\n**\n* *\n");
 for(i=2;i<n-2;++i){
 printf("*");
 for(j=1;j<=i;++j){
 printf(" ");
}
 printf("*\n");
}
 for(l=1;l<=n;++l){
 printf("*");
}
}
 return 0;
}
