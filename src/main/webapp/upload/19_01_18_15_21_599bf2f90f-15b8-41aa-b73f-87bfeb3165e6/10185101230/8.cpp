#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main(void)


{

int a,b,c,t;


scanf("%d %d %d",&a,&b,&c);

if(a>b){t=a;a=b;b=t;}

if(a>c){t=a;a=c;c=t;}

if(b>c){t=b;b=c;c=t;}

printf("%d",b);

return 0;

}

