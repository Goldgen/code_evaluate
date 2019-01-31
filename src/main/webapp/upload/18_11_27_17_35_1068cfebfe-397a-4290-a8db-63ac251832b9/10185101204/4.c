#include <stdio.h>
int main()
{double data[11][5];
double a;
for(int i=0;i<11;i++)
{data[i][0]=2.0+i*0.1;
a=data[i][0];
data[i][1]=1.0/a;
data[i][2]=a*a;
data[i][3]=a*data[i][2];
data[i][4]=a*data[i][3];
}
for(int i=0;i<11;i++)
{for(int j=0;j<4;j++)
printf("%.4f ",data[i][j]);
printf("%.4f",data[i][4]);
if(i<10)
printf("\n");}
return 0;
}