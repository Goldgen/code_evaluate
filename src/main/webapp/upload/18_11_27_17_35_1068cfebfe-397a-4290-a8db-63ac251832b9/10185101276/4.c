#include <stdio.h>
#include <math.h>
int main()
{
    int i,e;
    double data[11][5];
    for (i=0;i<11;i++){
        data[i][0]=2+0.1*i;
        for(e=1;e<5;e++){
        if(e==1)data[i][e]=1/data[i][0];
        else data[i][e]=pow(data[i][0],e);
    }
    }
    for (i=0;i<11;i++)
    for(e=0;e<5;e++){
        if(e==4)printf("%.4lf\n",data[i][e]);
        else printf("%.4lf ",data[i][e]);
    }
    return 0;
}
