#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isprime(int n)//将n表示成6*k,6*k+1,6*k+2,6*k+3,6*k+4,6*k+5
{  if(n==2||n==3)return 1;//5 以下的数有2,3是素数
   if(n%6!= 1&&n %6!= 5)
    {return 0 ;
    }
    
            int tmp =sqrt(n),i;
           for( i=5;i<=tmp;i+=6 )//对于6*k +5,+1,  余数为2,3,4,6肯定不能作为因数
           if(n%i==0||n%(i+ 2)==0 )
              {return 0 ;}

        return 1 ;
  }
int main()
{ int n;
 scanf("%d",&n);
 printf("%d",n);
 int i;
 for(i=3;i<=n/2;i+=2)
{ if(isprime(i)*isprime(n-i))
   printf("=%d+%d",i,n-i);
}
return 0;
}