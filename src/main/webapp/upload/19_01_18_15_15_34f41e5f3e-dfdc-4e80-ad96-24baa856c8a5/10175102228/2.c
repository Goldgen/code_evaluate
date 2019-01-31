#include<stdio.h>
#include<stdlib.h>
int main()
{ double e=1.0;
 int i,c=1;
 for(i=1;i<12;i++)
 {  c=c*i;
    e=e+(double)1/c;

 }
printf("%.6lf",e);
return 0;
}
