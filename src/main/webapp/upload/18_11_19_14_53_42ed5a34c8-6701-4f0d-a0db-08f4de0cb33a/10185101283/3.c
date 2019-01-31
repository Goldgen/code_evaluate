#include<stdio.h>
int b;
void f(void)
{
    static int a;
    static int x[100];
    static int i=0;
    scanf("%d",&a);
    if(a>0){
    x[i]=a;
    ++i;
      f();
    }
    if(i>1)
    {
    printf("%d ",x[i-1]);
     --i;
    }
    b=x[i-1];
}
int main()
{
    f();
    printf("%d",b);
    return 0;
}