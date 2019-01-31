#include <stdio.h>
int main()
{int n=0;
scanf("%d",&n);
printf("{}");
for(int i=0;i<n;i++)
   {printf("\n{%d}",i);
    for(int j=0;j<i;j++)
       {printf("\n{%d,%d}",j,i);
        for(int o=0;o<j;o++)
            {printf("\n{%d,%d,%d}",o,j,i);
             for(int p=0;p<o;p++)
                {printf("\n{%d,%d,%d,%d}",p,o,j,i);
                for(int m=0;m<p;m++)
                   {printf("\n{%d,%d,%d,%d,%d}",m,p,o,j,i);
                   for(int a=0;a<m;a++)
                   {printf("\n{%d,%d,%d,%d,%d,%d}",a,m,p,o,j,i);
                    for(int b=0;b<a;b++)
                    {printf("\n{%d,%d,%d,%d,%d,%d,%d}",b,a,m,p,o,j,i);
                     for(int c=0;c<b;c++)
                     {printf("\n{%d,%d,%d,%d,%d,%d,%d,%d}",c,b,a,m,p,o,j,i);
                      for(int d=0;d<c;d++)
                      {printf("\n{%d,%d,%d,%d,%d,%d,%d,%d,%d}",d,c,b,a,m,p,o,j,i);
                       for(int e=0;e<d;e++)
                       {printf("\n{%d,%d,%d,%d,%d,%d,%d,%d,%d,%d}",e,d,c,b,a,m,p,o,j,i);
                       }}}}}}}}}}return 0;
}
