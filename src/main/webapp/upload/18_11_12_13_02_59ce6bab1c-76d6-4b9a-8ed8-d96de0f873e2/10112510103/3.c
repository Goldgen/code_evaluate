#include<stdio.h>
void check (int);
int main()
{
    int n;
    scanf("%d",&n);
    check(n);
    return 0;
}
void check(int n){
    int j=0;
    if(n==2)
        printf("It is a prime number.");
    else
    {
        for (int i=2;i<n;i++)
        {
        if(n%i==0)
           {
               j=1;
               break;
           }
        }
    if(j==0)
        printf("It's not a prime number.");
    else
        printf("It is a prime number.");
    }
    return;
}
