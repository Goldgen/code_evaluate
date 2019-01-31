#include <stdio.h>
#include <stdlib.h>
void RunningAvg(float a)
{   float n;
    static float i=0,s=0;
    s=s+a; ++i;
    printf("%.2f\n",s/i);
    if (a!=-1) {scanf("%f",&n); if(n!=-1) RunningAvg(n);}
}
int main()
{
  float x;
  scanf("%f",&x);
  RunningAvg(x);
   return 0;
}

