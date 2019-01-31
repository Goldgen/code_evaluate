#include <stdio.h>
int main(void) {
    int d,m,y;
    scanf("%d %d %d\n",&m,&d,&y);
    if((d==1)||(d==21)||(d==31))
        printf("%dst ",d);
    else if((d==2)||(d==22))
        printf("%dnd ",d);
    else if((d==3)||(d==23))
        printf("%drd ",d);
    else
        printf("%dth ",d);
    switch(m){
        case 1:
            printf("January ");break;
        case 2:
            printf("February ");break;
        case 3:
            printf("March ");break;
        case 4:
            printf("April ");break;
        case 5:
            printf("May ");break;
        case 6:
            printf("June ");break;
        case 7:
            printf("July ");break;
        case 8:
            printf("August ");break;
        case 9:
            printf("September ");break;
        case 10:
            printf("October ");break;
        case 11:
            printf("November ");break;
        default:
            printf("December ");break;
    }
    printf("%d",y);
    return 0;
}
