#include<stdio.h>
#include<stdlib.h>
int solve(int a,int b,int c)
{ int x;
x=100*a+10*b+c;
 return x;

}
int threeexp(int n)
{ return n*n*n;
}
int main()
{
 int i,j,k;
 int a[10];
 int cnt=0;
 for(i=1;i<10;i++)
  { for(j=0;j<10;j++)
    { for(k=0;k<10;k++)
       { int t=threeexp(i)+threeexp(j)+threeexp(k);
          if(solve(i,j,k)==t)a[cnt++]=solve(i,j,k);

       }
     }

  }
  for(i=0;i<cnt-1;i++)
  { printf("%d ",a[i]);

  }
  printf("%d",a[i]);
 return 0;

}
