#include <stdio.h>
int main()
{
    double m=2.0;
    int i,j,n=0;
    double data[11][5]={{0},{0}};
    for(i=0;i<11;i++)
    {
    	data[i][0]=m;
    	m+=0.1;
	}
	for(j=0;j<11;j++)
	{
		n++;
	    data[j][1]=1.0/data[j][0];
		data[j][2]=data[j][0]*data[j][0];
		data[j][3]=data[j][0]*data[j][2];
		data[j][4]=data[j][0]*data[j][3];
		printf("%.4f %.4f %.4f %.4f %.4f",data[j][0],data[j][1],data[j][2],data[j][3],data[j][4]);
		if(n<11)
		printf("\n");
	}
    return 0;
}
