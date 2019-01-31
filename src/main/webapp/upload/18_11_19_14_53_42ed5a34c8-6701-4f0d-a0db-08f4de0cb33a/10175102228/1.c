#include<stdio.h>
#include<stdlib.h>
int cnt=1;
float sum=0.0;
float RunningAvg(float n)
{ sum+=n;
    return sum/cnt;
}
int main()
{ float n;
while(scanf("%f",&n)&&n!=-1)
 {printf("%.2f\n",RunningAvg(n));
    cnt++;
  }
 return 0;

}