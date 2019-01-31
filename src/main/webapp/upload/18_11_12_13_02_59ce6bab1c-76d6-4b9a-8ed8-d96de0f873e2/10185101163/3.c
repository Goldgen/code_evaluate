#include<stdio.h>
#include<math.h>
int Prime(int n)
{
int i,j=0;
for(i=2;i<=(int)sqrt(n);i++)
    if (n%i==0) j++;
if (j==0) return 0;
else return 1;
}
main ()
{
int n;
scanf("%d",&n);
if (Prime(n)==0) printf ("It is a prime number.");
else printf ("It is not a prime number.");
return 0;
}
