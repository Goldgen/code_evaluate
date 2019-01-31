#include<stdio.h>
int main(void)
{
    int y1=0;int y2=0;
    int m1=0;int m2=0;
    int d1=0;int d2=0;
    int c1=0;int c2=0;
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int o1=0;int o2=0;
    int t1=0;int t2=0;
    scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
    for(int i=1;i<y1;++i)
      {
        if((i%4==0&&i%100!=0)||i%400==0)
            c1=c1+1;
      }
      o1=365*(y1-1)+c1;
    for(int i=1;i<y2;++i)
      {
        if((i%4==0&&i%100!=0)||i%400==0)
            c2=c2+1;
      }
      o2=365*(y2-1)+c2;
    if((y1%4==0&&y1%100!=0)||y1%400==0)
        month[1]=29;
    for(int i=0;i<m1-1;++i)
         o1=o1+month[i];
        month[1]=28;
    if((y2%4==0&&y2%100!=0)||y2%400==0)
        month[1]=29;
    for(int i=0;i<m2-1;++i)
         o2=o2+month[i];
    t1=o1+d1;
    t2=o2+d2;
    printf("采集时间为%d天",t2-t1);
    return 0;

}
