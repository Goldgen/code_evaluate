#include<stdio.h>
#include<stdlib.h>

int main(){
  int a,b,c;
  int i=1;
  int j=1;
  int t=10;
  int x1=0;
  int x2=0;
  scanf("%d+%d=%d",&a,&b,&c);
  while((a*t+b)<=c){
        if(a*t+b==c){
        x1=i;
        break;}
    i++;
    t*=10;
  }
  t=10;

  while((b*t+a)<=c){
        if(b*t+a==c){
            x2=j;
            break;
        }
    j++;
    t*=10;
  }
  if(x1>0)
printf("%d",x1);
else if(x2>0)
    printf("-%d",x2);




return 0;

}

