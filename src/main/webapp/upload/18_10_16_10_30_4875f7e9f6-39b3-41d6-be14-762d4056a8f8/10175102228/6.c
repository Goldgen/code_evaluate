#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{ return a>b?a:b;

}
int main()
{ int a,b,c;
scanf("%d%d%d",&a,&b,&c);
 int MAX=max(a,b);
 MAX=max(MAX,c);
 printf("%d",MAX);
return 0;
}