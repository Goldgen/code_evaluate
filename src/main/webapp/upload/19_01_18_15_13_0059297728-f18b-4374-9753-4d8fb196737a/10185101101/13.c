#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int month,day,year = 0;

    scanf("%d %d %d",&month,&day,&year);
    switch(month){
case 1:
    if(day==1||day==21||day==31)
        printf("%dst January %d",day,year);
    else if(day==2||day==22)
        printf("%dnd January %d",day,year);
    else if(day==3||day==23)
        printf("%drd January %d",day,year);
    else
        printf("%dth January %d",day,year);
    break;
case 2:
    if(day==1||day==21||day==31)
        printf("%dst February %d",day,year);
    else if(day==2||day==22)
        printf("%dnd February %d",day,year);
    else if(day==3||day==23)
        printf("%drd February %d",day,year);
    else
        printf("%dth February %d",day,year);
    break;
case 3:
    if(day==1||day==21||day==31)
        printf("%dst March %d",day,year);
    else if(day==2||day==22)
        printf("%dnd March %d",day,year);
    else if(day==3||day==23)
        printf("%drd March %d",day,year);
    else
        printf("%dth March %d",day,year);
    break;
case 4:
    if(day==1||day==21||day==31)
        printf("%dst April %d",day,year);
    else if(day==2||day==22)
        printf("%dnd April %d",day,year);
    else if(day==3||day==23)
        printf("%drd April %d",day,year);
    else
        printf("%dth April %d",day,year);
    break;
case 5:
    if(day==1||day==21||day==31)
        printf("%dst May %d",day,year);
    else if(day==2||day==22)
        printf("%dnd May %d",day,year);
    else if(day==3||day==23)
        printf("%drd May %d",day,year);
    else
        printf("%dth May %d",day,year);
    break;
case 6:
    if(day==1||day==21||day==31)
        printf("%dst June %d",day,year);
    else if(day==2||day==22)
        printf("%dnd June %d",day,year);
    else if(day==3||day==23)
        printf("%drd June %d",day,year);
    else
        printf("%dth June %d",day,year);
    break;
case 7:
    if(day==1||day==21||day==31)
        printf("%dst July %d",day,year);
    else if(day==2||day==22)
        printf("%dnd July %d",day,year);
    else if(day==3||day==23)
        printf("%drd July %d",day,year);
    else
        printf("%dth July %d",day,year);
    break;
case 8:
    if(day==1||day==21||day==31)
        printf("%dst August %d",day,year);
    else if(day==2||day==22)
        printf("%dnd August %d",day,year);
    else if(day==3||day==23)
        printf("%drd August %d",day,year);
    else
        printf("%dth August %d",day,year);
    break;
case 9:
    if(day==1||day==21||day==31)
        printf("%dst September %d",day,year);
    else if(day==2||day==22)
        printf("%dnd September %d",day,year);
    else if(day==3||day==23)
        printf("%drd September %d",day,year);
    else
        printf("%dth September %d",day,year);
    break;
case 10:
    if(day==1||day==21||day==31)
        printf("%dst October %d",day,year);
    else if(day==2||day==22)
        printf("%dnd October %d",day,year);
    else if(day==3||day==23)
        printf("%drd October %d",day,year);
    else
        printf("%dth October %d",day,year);
    break;
case 11:
    if(day==1||day==21||day==31)
        printf("%dst November %d",day,year);
    else if(day==2||day==22)
        printf("%dnd November %d",day,year);
    else if(day==3||day==23)
        printf("%drd November %d",day,year);
    else
        printf("%dth November %d",day,year);
    break;
case 12:
    if(day==1||day==21||day==31)
        printf("%dst December %d",day,year);
    else if(day==2||day==22)
        printf("%dnd December %d",day,year);
    else if(day==3||day==23)
        printf("%drd December %d",day,year);
    else
        printf("%dth December %d",day,year);
    break;
default:
    printf("ERROR");
    break;
    }
    return 0;
}
