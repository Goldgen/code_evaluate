#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int d,m,y;
    scanf("%d %d %d",&m,&d,&y);
    if(d%10==1&&d!=11) printf("%dst ",d);
    else if(d%10==2&&d!=12) printf("%dnd ",d);
    else if(d%10==3&&d!=13) printf("%drd ",d);
    else printf("%dth ",d);
    switch(m){
    case 1:
        printf("January ");
        break;
    case 2:
        printf("February ");
        break;
    case 3:
        printf("March ");
        break;
    case 4:
        printf("April ");
        break;
    case 5:
        printf("May ");
        break;
    case 6:
        printf("June ");
        break;
    case 7:
        printf("July ");
        break;
    case 8:
        printf("August ");
        break;
    case 9:
        printf("September ");
        break;
    case 10:
        printf("October ");
        break;
    case 11:
        printf("November ");
        break;
    case 12:
        printf("December ");
        break;
    default:
        break;}
    printf("%d",y);
    return 0;
}


