#include<stdio.h>
int main()
{
    int c;
    int sum=0;
    for(int i=1; i<=5; ++i)
    {
      scanf("%d",&c);
      sum += c;
    }
    printf("%.1f",(float)sum/5);
    return 0;
}