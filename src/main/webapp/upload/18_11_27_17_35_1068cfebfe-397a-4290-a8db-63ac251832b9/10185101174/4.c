#include <stdio.h>
#include <stdlib.h>
#define INI 2.0

int main()
{
 double data[11][5];
 double a;
 a=INI;
 for(int i=0;i<11;i++){
    for(int j=0; j<5; j++){
        if(j==0){
            data[i][j]=a;
            printf("%.4f ",data[i][j]);
        }
        else if(j==1){
            data[i][j]=1.0/a;
            printf("%.4f ",data[i][j]);
        }
        else if(j==2){
            data[i][j]=a*a;
            printf("%.4f ",data[i][j]);
        }
        else if(j==3){
            data[i][j]=a*a*a;
            printf("%.4f ",data[i][j]);
        }
        else if(j==4){
            data[i][j]=a*a*a*a;
            if(i==10)
                printf("%.4f",data[i][j]);
            else
                printf("%.4f\n",data[i][j]);
        }
    }
    a+=0.1;
 }
}