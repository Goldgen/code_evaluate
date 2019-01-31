#include <stdio.h>
int main()
{
double e=1;
int a = 1;;
int b = 1;
double c;

do
{
b*=a;
c = 1.0/b;
e += c;
a ++;
}
while(c > 1e-6);
printf("%.6lf",e);

}
