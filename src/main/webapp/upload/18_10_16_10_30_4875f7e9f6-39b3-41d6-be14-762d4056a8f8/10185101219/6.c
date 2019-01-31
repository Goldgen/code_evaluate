#include<stdio.h>

main()

{

int a,b,c;

int big;


scanf("%d %d %d",&a,&b,&c);

if(a>=b)

big=a;

else

big=b;

if(c>big)

big=c;

printf("%d",big);

}