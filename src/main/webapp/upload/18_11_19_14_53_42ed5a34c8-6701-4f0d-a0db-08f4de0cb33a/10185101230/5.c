#include <stdio.h>
#include <stdlib.h>

int GDB(int a,int b){
if (b==0) return a;
if (b>0) return GDB(b,a%b);
}
int main(){
int m,n,x;
scanf("%d",&m);
scanf("%d",&n);
x=GDB(m,n);
printf("%d",x);
return 0;
}
