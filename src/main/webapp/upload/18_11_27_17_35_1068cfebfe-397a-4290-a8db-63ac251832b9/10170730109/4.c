#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double data[11][5];
    int c,r=0;
    for(r=0;r<11;r++){
        for(c=0;c<4;c++){
           if(c==0) data[r][0]=2.0+r*0.1;
           else if(c==1) data[r][1]=1.0/data[r][0];
           else data[r][c]=pow(data[r][0],c);
           printf("%.4lf ",data[r][c]);
        }
        if(r<10) printf("%.4lf\n",pow(data[r][0],4));
        else printf("%.4lf",pow(data[r][0],4));
    }
    return 0;
}

