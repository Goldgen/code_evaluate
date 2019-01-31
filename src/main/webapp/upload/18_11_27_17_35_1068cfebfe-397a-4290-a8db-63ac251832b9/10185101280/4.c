#include <stdio.h>

int main()
{
	int i,j;
   double data[11][5];
   
   for(i=0;i<11;i++)
   {
    data[i][0]=2.0+0.1*i;
    for(j=1;j<5;j++)
	{
    if(j==1)
        data[i][j]=1.0/data[i][0];
    else
        data[i][j]=pow(data[i][0],j);
    }
   }

for(i=0;i<11;i++)
{
    if(i>0&&i<11)
        printf("\n");
    for(j=0;j<5;j++){
        if(j==0)
            printf("%.4lf",data[i][j]);
        else
            printf(" %.4lf",data[i][j]); }
}
return 0;
}