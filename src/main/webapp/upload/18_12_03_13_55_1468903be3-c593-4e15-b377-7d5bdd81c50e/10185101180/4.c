#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int zhuan(int array[][51],int x,int y)
{
    int a,b,z;
    for(a=0;a<x;a++)
   {
       for(b=a+1;b<y;b++)
       {
          z=array[a][b];
          array[a][b]=array[b][a];
          array[b][a]=z;
       }
   }
}
int out(int array[][51],int x,int y)
{
    int c,d;
     for(c=0;c<x;c++)
   {
    for(d=0;d<y;d++)
    {
      if(d==0)
      printf("%d",array[c][d]);
        if(d!=0)
            printf(" %d",array[c][d]);
        if(c!=x-1&&d==y-1)
            printf("\n");
    }
   }
}
int main()
{
   int m,n,i,j;
   int array[51][51];
   scanf("%d %d",&m,&n);
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&array[i][j]);
       }
   }
  zhuan(array,m,n);
  out(array,m,n);
   return 0;
}
