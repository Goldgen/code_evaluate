#include<stdio.h>
int main()
{
    unsigned long long S=1ULL;
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        S=S*n;
        n--;
    }
    printf("%llu",S);
    return 0;
}
