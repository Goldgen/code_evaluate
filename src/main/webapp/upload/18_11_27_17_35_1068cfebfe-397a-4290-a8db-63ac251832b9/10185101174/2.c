#include <stdio.h>
#include <stdlib.h>

int main()
{
    double date[100];
    int n=2;
    double total1=0.0;
    double total2=0.0;
    double total=0.0;
    for(int i=0;i<100;i++){
        date[i]=1.0/(n*(n+1)*(n+2));
        n+=2;
        if(i%2)
            total1+=date[i];
        else
            total2+=date[i];
    }
    total=(total2-total1)*4.0+3.0;
    printf("%.4f",total);

}
