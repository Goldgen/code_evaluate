
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (b==11||b==12||b==13) printf("%dth",b);
	else if (b%10==1) printf("%dst",b);
	else if (b%10==2) printf("%dnd",b);
	else if (b%10==3) printf("%drd",b);
	else printf("%dth",b);
	if(a==1) printf(" January %d",c);
	else if(a==2) printf(" February %d",c);
	else if(a==3) printf(" March %d",c);
	else if(a==4) printf(" April %d",c);
	else if(a==5) printf(" May %d",c);
	else if(a==6) printf(" June %d",c);
	else if(a==7) printf(" July %d",c);
	else if(a==8) printf(" August %d",c);
	else if(a==9) printf(" September %d",c);
	else if(a==10) printf(" October %d",c);
	else if(a==11) printf(" November %d",c);
	else printf(" December %d",c);
	return 0;
}