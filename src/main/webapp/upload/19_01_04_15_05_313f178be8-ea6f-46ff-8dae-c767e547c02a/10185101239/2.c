#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
int a,b,c;
char j,d;
 scanf("%d",&a);
 scanf("%c",&j);
 scanf("%d",&b);
 scanf("%c",&d);
 scanf("%d",&c);
	int i,m;
for(i=0;;i++){
	m=pow(10,i);
if(a*m+b==c){
	printf("%d",i);
	break;
}
}
    return 0;
}