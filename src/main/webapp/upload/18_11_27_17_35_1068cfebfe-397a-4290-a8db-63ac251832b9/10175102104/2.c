#include<stdio.h>
#include<stdlib.h>

int main()
{ 
    double list[100];
    int i,n=2;
    double x,result=0.0;
    for(i=0;i<100;i++)
    { 
        x=(double)(n*n*n+3*n*n+2*n);
	    list[i]=1.0/x;
        if(i%2!=1)
        {
            result=result+list[i];
        }
        else 
        {
            result=result-list[i];
        }
        n+=2;
    }
    printf("%.4lf",result*4.0+3.0);
    return 0; 
}