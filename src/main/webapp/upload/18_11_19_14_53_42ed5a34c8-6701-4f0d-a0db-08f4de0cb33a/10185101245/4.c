#include <stdio.h>
#include <stdlib.h>

int cal(int n)
{
    if(n==0)
        return 0;
    int m=n%2;
    cal(n/2);
    printf("%d",m);


}
int main()
{
   int n=0;
   scanf("%d",&n);
   cal(n);

    return 0;
}
