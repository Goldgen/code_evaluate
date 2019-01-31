#include<stdio.h>
#include<math.h>

void d2b(int n)
{
    if(n==0) return;
    else{
        d2b(n/2);
        int m=n%2;
        printf("%d", m);
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    if(a==0) printf("0");
    d2b(a);
    return 0;
}
