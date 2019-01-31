#include <stdio.h>
int main()
{
    int a,b,c,d,t;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b){
        t=a;
    }else{
        t=b;
}
  if(c>t){
    t=c;
}if(d>t){
    t=d;
}printf("%d",t);
}