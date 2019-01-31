#include <stdio.h>

int main()
{
 double data[11][5];
 for(int i=0;i<11;++i){
 data[i][0]=2.0+i*0.1;
 data[i][1]=1.0/data[i][0];
 data[i][2]=data[i][0]*data[i][0];
 data[i][3]=data[i][2]*data[i][0];
 data[i][4]=data[i][3]*data[i][0];
}
    for(int i3=0;i3<11;++i3)
        printf("%.4lf %.4lf %.4lf %.4lf %.4lf\n",data[i3][0],data[i3][1],data[i3][2],data[i3][3],data[i3][4]);
  return 0;
}
