#include<stdio.h>
#include<stdlib.h>
int main()
{  double a[11][5];
    int i,j;
 double g=0.0;
 for(i=0;i<11;i++)
 { a[i][0]=2.0+g;
    g=g+0.1;
 }
   for(i=0;i<11;i++)
	{ a[i][1]=1.0/a[i][0];
	 a[i][2]=a[i][0]*a[i][0];
	  a[i][3]=a[i][2]*a[i][0];
	 a[i][4]=a[i][3]*a[i][0];
	}
  for(i=0;i<11;i++)
   {  for(j=0;j<5;j++)
	 { printf("%.4lf",a[i][j]);
	   if(j<4)printf(" ");
	 }printf("\n");
   }
 return 0;
}