
#include<stdio.h>
int main()
{
int n,m,j,q;
scanf("%d",&n);
if(n>=4&&n<=100)
{
printf("*\n");
printf("**");
for(m=1;m<=(n-3);m++)
  {
     printf("\n*");

     for(j=1;j<=(n-3);j++)
    {

     printf(" ");
     if(j>=m)
        break;
     }

printf("*");
        }
      printf("\n");

      for(q=1;q<=n;q++)
      printf("*");
  }


    return 0;
}
