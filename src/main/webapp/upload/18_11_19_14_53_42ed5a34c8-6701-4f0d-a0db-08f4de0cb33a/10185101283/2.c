#include<stdio.h>
int x(int a){
    int b=a%10;
    static int c=0;
        c = c+b;
    if(a>0)
        x(a/10);
        return c;

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",x(n));
    return 0;
}
