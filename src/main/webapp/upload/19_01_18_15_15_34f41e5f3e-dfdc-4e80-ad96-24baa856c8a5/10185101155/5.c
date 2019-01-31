#include <stdio.h>
int main()
{
    int n;
    int a,b;
    a = 0;
    b = 0;
    n = 1;
    while(n<=100)
    {
  
        if(n%2==0)
            b = b + n;
		else
            a = a + n;
            n++;
    }
    printf("%d %d",a,b);
    return 0;
}