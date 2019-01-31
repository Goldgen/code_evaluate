#include <stdio.h>
#include <stdlib.h>

int main()
{
    int D,M,Y;
    scanf("%d %d %d",&M,&D,&Y);
    if(D<=31&&D>0)
	{
	switch(D)
    {
    case 1:case 11:case 21:case 31:
        printf("%dst",D);
        break;
    case 2:case 12:case 22:
        printf("%dnd",D);
        break;
    case 3:case 13:case 23:
        printf("%drd",D);
        break;
    default:
        printf("%dth",D);
        break;
    }
	}
	else
		printf("ERROR");
	if(M<=12&&M>0)
	{
    switch(M)
    {
    case 1:
        printf(" January");
        break;
    case 2:
        printf(" February");
        break;
    case 3:
        printf(" March");
        break;
    case 4:
        printf(" April");
        break;
    case 5:
        printf(" May");
        break;
    case 6:
        printf(" June");
        break;
    case 7:
        printf(" July");
        break;
    case 8:
        printf(" August");
        break;
    case 9:
        printf(" September");
        break;
    case 10:
        printf(" October");
        break;
    case 11:
        printf(" November");
        break;
    case 12:
        printf(" December");
        break;
    default:
        printf("ERROR");
        break;
	}
    }
	else 
		printf("ERROR");
    printf(" %d",Y);
    return 0;
}