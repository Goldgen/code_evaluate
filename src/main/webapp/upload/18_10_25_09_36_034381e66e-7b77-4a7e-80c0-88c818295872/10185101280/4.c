
#include<stdio.h>
int main()
{
int n,m,j,h,p;
scanf("%d",&n);
if(n>=4&&n<=10)
{

for(m=1;m<=n;m++)
{
printf("*");
}
for(h=1;h<=(n-2);h++)
   {


    printf("\n*");
    for(p=1;p<=(n-2);p++){
    printf(" ");
    }
    printf("*");
    }

printf("\n");
for(j=1;j<=n;j++)
{
printf("*");
}


    return 0;
}}
