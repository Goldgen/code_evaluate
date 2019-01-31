#include <stdio.h>
int GDB(int a, int b){
    if(b>0)
        return GDB(b,a%b);
    return a;
}
int main()
{
    int a,b,m;
    scanf("%d %d",&a,&b);
    m=GDB(a,b);
	printf("%d",m);
return 0;
}