#include <stdio.h>
int main()
{
double sum=1;
int index = 1;;
int mul = 1;
double cur;

do
{
mul*=index;
index ++;
cur = 1.0/mul;
sum += cur;
}while(cur >= 1e-6);
printf("%lf", sum);

}
