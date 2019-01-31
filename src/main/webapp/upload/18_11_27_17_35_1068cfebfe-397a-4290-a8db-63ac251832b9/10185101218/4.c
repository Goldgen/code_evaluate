#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[11][5];
    int n = 0,m = 0;
    double firstnum = 2.0;
    for( ;n < 11;n++){
        data[n][0] = firstnum;
        firstnum += 0.1;
    }
    for(n = 0;n < 11;n++){
        data[n][1] = 1.0/data[n][0];
        data[n][2] = data[n][0]*data[n][0];
        data[n][3] = data[n][2]*data[n][0];
        data[n][4] = data[n][3]*data[n][0];
    }
    for(n = 0;n < 11;n++){
        for(m = 0;m < 5;m++){
            if(m==4) printf("%.4lf\n",data[n][m]);
            else     printf("%.4lf ",data[n][m]);
        }
    }
    return 0;
}
