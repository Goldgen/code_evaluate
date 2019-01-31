#include <stdio.h>

int GDB(int,int);
int main(void)
{
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    printf("%d",GDB(a,b));
    return 0;
}
int GDB(int a,int b){
    if(b>0){
        GDB(b,a%b);
    }
    else if(b==0)
        return a;
}