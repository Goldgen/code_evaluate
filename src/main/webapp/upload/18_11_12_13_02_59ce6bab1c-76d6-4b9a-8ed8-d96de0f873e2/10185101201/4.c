#include<stdio.h>
#include<math.h>
void g(int x)
{
    int i=x,j,k=0,t=0;
    while(i>0)
    {
        j=i%10;
        k+=j*pow(8,t);
        t++;
        i=(i-j)/10;
    }
    printf("%d",k);
}
int main()
{
    int a;
    scanf("%d",&a);
    g(a);
}