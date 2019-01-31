#include <stdio.h>
int jia(int v,int w,int x,int y,int z);
int main()
{
    int b,c,d,e,f;
    double n;
    int cost[5];
    int a=getchar();
    int i=0;
    while(a!='T')
    {   scanf(" %d %d %d %d",&b,&c,&d,&e);
        cost[i]=jia(a,b,c,d,e);
        i++;
        a=getchar();
    }
     if(a=='T')
     {
         for(n=0,f=i-1;f>=0;f--)
         {
             n=n+cost[f];
         }
         printf("Total cost: $%.2lf",n);
     }
     return 0;
}
int jia(int v,int w,int x,int y,int z)
{
    double g;
    if(v=='P')
    {   g=0.89*w*x*y*z/12;
        printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",w,x,y,z,g);

    }
    if(v=='O')
    {   g=3.10*w*x*y*z/12;
        printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",w,x,y,z,g);

    }
    if(v=='F')
    {   g=1.09*w*x*y*z/12;
        printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",w,x,y,z,g);

    }
    if(v=='C')
    {   g=2.26*w*x*y*z/12;
        printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",w,x,y,z,g);

    }
    if(v=='M')
    {   g=4.50*w*x*y*z/12;
        printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",w,x,y,z,g);
     
    }
	return g;
}
