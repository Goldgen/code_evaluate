#include <stdio.h>
#include <stdlib.h>
int GDB(int a, int b){
    if(a%b)
        return GDB(b,a%b);
    return b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
        if(a<b){
       int t=a;
        a=b;
        b=t;
        }
    printf("%d",GDB(a,b));
}
