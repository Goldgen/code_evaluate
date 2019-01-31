#include<stdio.h>
int main()
{
int i,j,n,d;
scanf("%d",&n);
d=(n+1)/2;
for(i=1;i<d;i++) {
for(j=1;j<=i-1+d;j++)
{if(j==d-i+1||j==d+i-1)
printf("*");
if(j<d-i+1)
    printf(" ");
if((j>d-i+1)&&(j<d+i-1))
    printf(" ");
}
printf("\n");}
for(i=1;i<=2*d-1;i++)
printf("*");
}
