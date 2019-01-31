#include <stdio.h>
int main(){
	double E=0.0,mul=1;
    for(int i=1;i<20;i++){
        E+=1/mul;
        mul*=i;
        //cout<<mul<<endl;
    }
    printf("%.6lf",E);
    return 0;
}
