#include<stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&b,&a,&c);//b????a????c???
    if(a==1||a==21||a==31)
        printf("%dst ",a);
    else if(a==2||a==22)
        printf("%dnd ",a);
    else if(a==3||a==23)
        printf("%drd ",a);
    else
        printf("%dth ",a);//??1st?2nd?3rd?4th?????
    switch (b)
    {
        case 1:printf("January");//??
        break;
        case 2:printf("February");//??
        break;
        case 3:printf("March");//??
        break;
        case 4:printf("April");//??
        break;
        case 5:printf("May");//??
        break;
        case 6:printf("June");//??
        break;
        case 7:printf("July");//??
        break;
        case 8:printf("August");//??
        break;
        case 9:printf("September");//??
        break;
        case 10:printf("October");//??
        break;
        case 11:printf("November");//???
        break;
        case 12:printf("December");//???
        break;
        default:break;
    }                               //????
    printf(" %d",c);//????
    return 0;
}
