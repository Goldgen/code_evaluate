#include <stdio.h>
int main()
{
 int a,b,s1,s2;
 a=1;
 b=2;
 s1=0;
 s2=0;
 for(a=1;a<100;a=a+2)
 {
     s1+=a;
 }
 for(b=2;b<101;b=b+2)
 {
     s2+=b;
 }
 printf("%d %d",s1,s2);
return 0;
}
