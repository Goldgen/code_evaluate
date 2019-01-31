#include <stdio.h>
int main()
{
    double data[100];
    int i;
    double sum=0;
    for(i=0;i<100;i++){
        data[i]=1.0/((2*(i+1))*(2*(i+1)+1)*(2*(i+2)));
    }
    for(i=0;i<100;i++){
       // printf("%lf\n",data[i]);
        if(i%2==0){
            sum+=data[i];
        }
        else sum-=data[i];
    }

    printf("%.4lf",sum*4.0+3.0);
    return 0;
}
