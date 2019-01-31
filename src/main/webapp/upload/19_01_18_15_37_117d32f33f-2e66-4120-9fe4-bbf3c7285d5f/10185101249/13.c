#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    switch(b)
    {
    case 1:case 21:case 31:
		printf("%dst ",b);
        break;
    case 2:case 22:
		printf("%dnd ",b);
        break;
    case 3:case 23:
		printf("%drd ",b);
        break;
    default:
		printf("%dth ",b);
        break;
    }
    switch(a)
    {
    case 1:printf("January %d",c);
        break;
    case 2:printf("February %d",c);
        break;
    case 3:printf("March %d",c);
        break;
    case 4:printf("April %d",c);
        break;
    case 5:printf("May %d",c);
        break;
    case 6:printf("June %d",c);
        break;
	case 7:printf("July %d",c);
        break;
    case 8:printf("August %d",c);
        break;
    case 9:printf("September %d",c);
        break;
    case 10:printf("October %d",c);
        break;
    case 11:printf("November %d",c);
        break;
    case 12:printf("December %d",c);
        break;
    default:
        break;
    }
    return 0;
}