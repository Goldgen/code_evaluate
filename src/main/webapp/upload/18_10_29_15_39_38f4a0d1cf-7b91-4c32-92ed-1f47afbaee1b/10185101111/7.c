#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a,cont=0;
    scanf("%d",&a);
    while(a!=0){
		int x=a&1;
        if(x==1)
            cont++;
            a=a>>1;
    }
    printf("%d",cont);
}