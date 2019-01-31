#include <stdio.h>
#include <stdlib.h>

int GDB(int a,int b);
int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",GDB(n,m));
    return 0;
}

int GDB(int a,int b){
    if (b==0) return a;
    GDB(b,a%b);
}
