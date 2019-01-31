#include <stdio.h>

int GDB(int a,int b);
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",GDB(x,y));
    return 0;
}
int GDB(int a,int b){
    if(b==0)
        return a;
    else if(b>0)
        return GDB(b,a%b);
}
