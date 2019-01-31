#include <stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d %d %d",&b,&a,&c);
	t=a%10;
	switch(t){
		case 1:if(a==11){
        printf("%dth",a);break;
		}else{
		printf("%dst",a);break;
		}
		case 2:if(a==12){
                printf("%dth",a);break;
		}else{
		printf("%dnd",a);break;
		}
		case 3:printf("%drd",a);break;
		default:printf("%dth",a);break;
	}
	switch(b){
		case 1:printf(" January");break;
		case 2:printf(" February");break;
		case 3:printf(" March");break;
		case 4:printf(" April");break;
		case 5:printf(" May");break;
		case 6:printf(" June");break;
		case 7:printf(" July");break;
		case 8:printf(" August");break;
		case 9:printf(" September");break;
		case 10:printf(" Octorber");break;
		case 11:printf(" November");break;
		default:printf(" December");break;
	}printf(" %d",c);
}
