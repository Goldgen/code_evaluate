#include<stdio.h>

void main()

{

int a,b,c;

for(a=1;a<20;a++)

for(b=1;b<13;b++)

{  c=100-a-b;

if(c%3==0 && a*7+b*5+c/3==100)
printf("%d %d %d",a,b,c);
}
 return 0;

}
