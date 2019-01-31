#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,cont=0;
    int d[1024];
    for(int i=0;;i++){
        if(i<100)continue;
        if(i>999)break;
        a=i%10;
        b=(i/10)%10;
        c=i/100;
        if(a*a*a+b*b*b+c*c*c==i){
		cont++;
		d[cont]=i;
    }
    }
    for(int m=1;m<=cont;m++){
    	if(m==cont){
    		printf("%d",d[m]);
    		break;
		}
		printf("%d ",d[m]);
	}
}
