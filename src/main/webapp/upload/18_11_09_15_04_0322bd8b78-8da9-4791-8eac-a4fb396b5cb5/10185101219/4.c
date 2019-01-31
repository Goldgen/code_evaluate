#include <stdio.h>
#include <ctype.h>
int main()
{
int n;
scanf("%d",&n);
long long int i=1;
long long int sum=1;
do{
    sum=sum*i;
    i=i+1;
}
while(i==sum-1);
long long int e;
e=sum%20181111;


printf("%lld",e);
return 0;

}