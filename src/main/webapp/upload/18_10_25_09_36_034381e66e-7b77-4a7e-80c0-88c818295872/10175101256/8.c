#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year[2],month[2],day[2],length[2]={0,0};
    scanf("%d %d %d %d %d %d",&year[0],&month[0],&day[0],&year[1],&month[1],&day[1]);
    for(int i=0;i<2;i++){
            length[i]=(month[i]-1)*30+day[i];
            if((year[i]%4==0&&year[i]%100!=0)||year[i]%400==0){
            if(month[i]>2)
            length[i]++;}
        switch(month[i]){
    case 2:
    case 6:
    case 7:
        length[i]++;
        break;
    case 3:
        length[i]--;
        break;
    case 8:
        length[i]+=2;
        break;
    case 9:
    case 10:
        length[i]+=3;
        break;
    case 11:
    case 12:
        length[i]+=4;
        break;
    default:
        break;
        }
    }
    for(int j=year[0];j<year[1];j++){
        length[1]+=365;
        if((j%4==0&&j%100!=0)||j%400==0)
            length[1]++;
    }
    printf("采集时间为%d天",length[1]-length[0]);
    return 0;
}
