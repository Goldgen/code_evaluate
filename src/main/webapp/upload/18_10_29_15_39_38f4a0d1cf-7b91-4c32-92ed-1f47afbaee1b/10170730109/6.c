#include <stdio.h>

int main(void) {
    int a,b,q,p,mod=0;
    scanf("%d %d",&a,&b);
    if(a>=b){
        q=a;
        p=b;
    }
    else{
        q=b;
        p=a;
    }
    while(p!=0){
        mod=q%p;
        if(mod==0){
            break;
        }
		q=p;
        p=mod;
		
    }
    printf("最大公约数是: %d",p);
    return 0;
}



