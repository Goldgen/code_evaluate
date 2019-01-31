#include <stdio.h>
unsigned int sum(unsigned int);
int main()
{
   unsigned int n;
   scanf("%u",&n);
   n=sum(n);
   printf("%u",n);
    return 0;
}
unsigned int sum(unsigned int a)
{
    if (a<10)
        return a%10;
        return a%10+sum(a/10);

}