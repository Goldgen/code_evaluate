#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int m,d,y;
    char ch[4];
    scanf("%d %d %d",&m,&d,&y);
    if(d==1||d==21||d==31)
        strcpy(ch,"st");                       //??
    else if(d==2||d==22)
        strcpy(ch,"nd");                        //??
    else if(d==3||d==23)
        strcpy(ch,"rd");                         //??
    else
        strcpy(ch,"th");                           //?n
    switch(m)
    {
        case 1:printf("%d%s January %d",d,ch,y);           /*??????*/
        break;
        case 2:printf("%d%s February %d",d,ch,y);            //??????
        break;
        case 3:printf("%d%s March %d",d,ch,y);               //??
        break;
        case 4:printf("%d%s April %d",d,ch,y);               //??
        break;
        case 5:printf("%d%s May %d",d,ch,y);                //??
        break;
        case 6:printf("%d%s June %d",d,ch,y);             //??
        break;
        case 7:printf("%d%s July %d",d,ch,y);             //??
        break;
        case 8:printf("%d%s August %d",d,ch,y);               //??
        break;
        case 9:printf("%d%s September %d",d,ch,y);             //??
        break;
        case 10:printf("%d%s October %d",d,ch,y);            //??
        break;
        case 11:printf("%d%s November %d",d,ch,y);              //???
        break;
        case 12:printf("%d%s December %d",d,ch,y);            //???
        break;
        default:                                  //??
        break;
    }
    return 0;
}