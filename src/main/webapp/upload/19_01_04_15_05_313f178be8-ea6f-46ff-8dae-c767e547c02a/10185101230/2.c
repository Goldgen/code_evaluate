#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,x,i;
scanf("%d+%d=%d",&a,&b,&c);
x=a+b;
i=0;
move(a,b,c,x,i);
return 0;
}
int move(int d,int e,int f,int y,int j){
if(y!=f){
    j=j+1;
    d=d*10;
    y=d+e;
    return move(d,e,f,y,j);
    }
printf("%d",j);
}
