#include<stdio.h>
#include<string.h>
int main()
{
    int m,d,y;
    char ch[4];
    scanf("%d %d %d",&m,&d,&y);
    switch(d)
    {
    case 1:case 21:case 31:
        strcpy(ch,"st");
        break;
    case 2:case 22:
        strcpy(ch,"nd");
        break;
    case 3:case 13:case 23:
        strcpy(ch,"rd");
        break;
    default:
        strcpy(ch,"th");
        break;
    }
    switch(m)
    {
    case 1:
        printf("%d%s January %d",d,ch,y);
        break;
    case 2:
        printf("%d%s February %d",d,ch,y);
        break;
    case 3:
        printf("%d%s March %d",d,ch,y);
        break;
    case 4:
        printf("%d%s April %d",d,ch,y);
        break;
    case 5:
        printf("%d%s May %d",d,ch,y);
        break;
    case 6:
        printf("%d%s June %d",d,ch,y);
        break;
    case 7:
        printf("%d%s July %d",d,ch,y);
        break;
    case 8:
        printf("%d%s August %d",d,ch,y);
        break;
    case 9:
        printf("%d%s September %d",d,ch,y);
        break;
    case 10:
        printf("%d%s October %d",d,ch,y);
        break;
    case 11:
        printf("%d%s November %d",d,ch,y);
        break;
    default:
        printf("%d%s December %d",d,ch,y);
        break;
    }
    return 0;
}