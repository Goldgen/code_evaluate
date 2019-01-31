#include<stdio.h>
#include<math.h>
int main()
{
 int x,y,z,i,b,a;
 char c,d;
 scanf("%d%c%d%c%d",&x,&c,&y,&d,&z);
 for(i=0;i<=9;i++)
 {
     b=pow(10,i);
     if(b*x+y==z)  {a=i;printf("%d",a); break;}
     if(x+y*b==z){a=i;printf("-%d",a);break;}
 }

 return 0;
}