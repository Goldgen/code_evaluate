#include <stdio.h>
int main()
{
    int y1,y2,m1,m2,d1,d2,det1,det2,det;
    scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
	det1=((y1-2000)/4*366+(y1-2000-((y1-2000)/4))*365);
    if((y1%4==0)&&(y1%100!=0)||(y1%400==0)){
        switch(m1){
        case 2:det1=det1+31;break;case 3:det1=det1+60;break;
		case 4:det1=det1+91;break;case 5:det1=det1+121;break;
        case 6:det1=det1+152;break;case 7:det1=det1+182;break;
        case 8:det1=det1+213;break;case 9:det1=det1+244;break;
        case 10:det1=det1+274;break;case 11:det1=det1+305;break;
        case 12:det1=det1+335;break;default:;break;
        }}
        else{
            switch(m1){
        case 2:det1=det1+31;break;case 3:det1=det1+59;break;
        case 4:det1=det1+90;break;case 5:det1=det1+120;break;
        case 6:det1=det1+151;break;case 7:det1=det1+181;break;
        case 8:det1=det1+212;break;case 9:det1=det1+243;break;
        case 10:det1=det1+273;break;case 11:det1=det1+304;break;
        case 12:det1=det1+334;break;default:;break;
        }}
        det1=det1+(d1-1);

    det2=((y2-2000)/4*366+(y2-2000-((y2-2000)/4))*365);
    if((y2%4==0)&&(y2%100!=0)||(y2%400==0)){
        switch(m2){
        case 2:det2=det2+31;break;case 3:det2=det2+60;break;
        case 4:det2=det2+91;break;case 5:det2=det2+121;break;
        case 6:det2=det2+152;break;case 7:det2=det2+182;break;
        case 8:det2=det2+213;break;case 9:det2=det2+244;break;
        case 10:det2=det2+274;break;case 11:det2=det2+305;break;
        case 12:det2=det2+335;break;default:;break;
        }}
        else{
        switch(m2){
        case 2:det2=det2+31;break;case 3:det2=det2+59;break;
        case 4:det2=det2+90;break;case 5:det2=det2+120;break;
        case 6:det2=det2+151;break;case 7:det2=det2+181;break;
        case 8:det2=det2+212;break;case 9:det2=det2+243;break;
        case 10:det2=det2+273;break;case 11:det2=det2+304;break;
        case 12:det2=det2+334;break;default:;break;
        }}
        det2=det2+(d2-1);
    det=det2-det1;
    printf("采集时间为%d天",det);
    return 0;
}
