#include<stdio.h>



int main()

{

	int a,b,c,d,e,f,g,h,i,j,k,l;

	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

	g=b-1;
	if(（a%4=0）&&（a%100!=0）||(a%400=0)){

	if(g==0) h=c;

	else if(g==1) h=c+31;

	else if(g==2) h=c+60;

	else if(g==3) h=c+91;

	else if(g==4) h=c+121;

	else if(g==5) h=c+152;

	else if(g==6) h=c+182;

	else if(g==7) h=c+213;

	else if(g==8) h=c+244;

	else if(g==9) h=c+274;
	else if(g==10) h=c+305;
	else if(g==11) h=c+335;
	}
	else {
	if(g==0) h=c;

	else if(g==1) h=c+31;

	else if(g==2) h=c+59;

	else if(g==3) h=c+90;

	else if(g==4) h=c+120;

	else if(g==5) h=c+151;

	else if(g==6) h=c+181;

	else if(g==7) h=c+212;

	else if(g==8) h=c+243;

	else if(g==9) h=c+273;

	else if(g==10) h=c+304;

	else if(g==11) h=c+334;
	}
	i=e-1;
	if(d%4==0){

	if(i==0) j=f;

	else if(i==1) j=f+31;

	else if(i==2) j=f+60;

	else if(i==3) j=f+91;

	else if(i==4) j=f+121;

	else if(i==5) j=f+152;

	else if(i==6) j=f+182;

	else if(i==7) j=f+213;

	else if(i==8) j=f+244;

	else if(i==9) j=f+274;

	else if(i==10) j=f+305;

	else if(i==11) j=f+335;
	}
	else{
    if(i==0) j=f;
	else if(i==1) j=f+31;

	else if(i==2) j=f+59;

	else if(i==3) j=f+90;

	else if(i==4) j=f+120;

	else if(i==5) j=f+151;

	else if(i==6) j=f+181;
	else if(i==7) j=f+212;
	else if(i==8) j=f+243;

	else if(i==9) j=f+273;

	else if(i==10) j=f+304;

	else if(i==11) j=f+334;
	}
	if(a>=d) {k=(a-d)/4;
	l=(a-d)*365+k+j-h;}

	else {k=(d-a)/4;
	l=(d-a)*365+k+j-h;}

	printf("采集时间为%d天",l);

	return 0;

}