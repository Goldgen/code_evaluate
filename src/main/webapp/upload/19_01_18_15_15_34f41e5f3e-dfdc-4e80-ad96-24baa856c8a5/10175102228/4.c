#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{ float score;
 float high=0.0,low=100;
  while(scanf("%f",&score)&&score>0)
  { high=high>score?high:score;
     low=low<score?low:score;
}
  printf("最高成绩是: %.2f, 最低成绩是: %.2f",high,low);
    return 0;
}