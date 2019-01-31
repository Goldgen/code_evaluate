#include<stdio.h>
void main() { int x,xx,n;
  scanf("%d",&x); xx=x; n=0;
  while ( xx ) {
    if ( xx%2 ) n++;  
    xx/=2;
  }
  printf("%d",n);
}