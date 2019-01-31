#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{ return a>b?a:b;

}
int main()
{ int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
 int MAX=max(a,b);
 MAX=max(MAX,c);
 MAX=max(MAX,d);
 printf("%d",MAX);
return 0;
}