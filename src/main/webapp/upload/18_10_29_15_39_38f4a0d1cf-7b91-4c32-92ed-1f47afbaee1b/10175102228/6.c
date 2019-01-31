#include<stdio.h>
#include<stdlib.h>
int main()
{int a,b,gcd;
 scanf("%d%d",&a,&b);
 if(a>b)
 { while(b!=0)
  {int t=b;
   b=a%b;
   a=t;
  }
  gcd=a;
 }
 else 
 {while(a!=0)
   { int t=a;
	 a=b%a;
	 b=t;
   }
  gcd=b;
 }
 printf("最大公约数是: %d",gcd);
 return 0;
	
}