#include<stdio.h>
int main(void)
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d %d",&a,&b,&c);
    switch(a)
    {
    case 1:
        if(b==1||b==21||b==31)
        printf("%dst January %d",b,c);
        else if(b==2||b==22)
        printf("%dnd January %d",b,c);
        else if(b==3||b==23)
        printf("%drd January %d",b,c);
        else
        printf("%dth January %d",b,c);
        break;
    case 2:
        if(b==1||b==21||b==31)
        printf("%dst February %d",b,c);
        else if(b==2||b==22)
        printf("%dnd February %d",b,c);
        else if(b==3||b==23)
        printf("%drd February %d",b,c);
        else
        printf("%dth February %d",b,c);
        break;
    case 3:
        if(b==1||b==21||b==31)
        printf("%dst March %d",b,c);
        else if(b==2||b==22)
        printf("%dnd March %d",b,c);
        else if(b==3||b==23)
        printf("%drd March %d",b,c);
        else
        printf("%dth March %d",b,c);
        break;
    case 4:
        if(b==1||b==21||b==31)
        printf("%dst April %d",b,c);
        else if(b==2||b==22)
        printf("%dnd April %d",b,c);
        else if(b==3||b==23)
        printf("%drd April %d",b,c);
        else
        printf("%dth April %d",b,c);
        break;
    case 5:
        if(b==1||b==21||b==31)
        printf("%dst May %d",b,c);
        else if(b==2||b==22)
        printf("%dnd May %d",b,c);
        else if(b==3||b==23)
        printf("%drd May %d",b,c);
        else
        printf("%dth May %d",b,c);
        break;
    case 6:
        if(b==1||b==21||b==31)
        printf("%dst June %d",b,c);
        else if(b==2||b==22)
        printf("%dnd June %d",b,c);
        else if(b==3||b==23)
        printf("%drd June %d",b,c);
        else
        printf("%dth June %d",b,c);
        break;
    case 7:
        if(b==1||b==21||b==31)
        printf("%dst July %d",b,c);
        else if(b==2||b==22)
        printf("%dnd July %d",b,c);
        else if(b==3||b==23)
        printf("%drd July %d",b,c);
        else
        printf("%dth July %d",b,c);
        break;
    case 8:
        if(b==1||b==21||b==31)
        printf("%dst August %d",b,c);
        else if(b==2||b==22)
        printf("%dnd August %d",b,c);
        else if(b==3||b==23)
        printf("%drd August %d",b,c);
        else
        printf("%dth August %d",b,c);
        break;
    case 9:
        if(b==1||b==21||b==31)
        printf("%dst September %d",b,c);
        else if(b==2||b==22)
        printf("%dnd September %d",b,c);
        else if(b==3||b==23)
        printf("%drd September %d",b,c);
        else
        printf("%dth September %d",b,c);
        break;
    case 10:
        if(b==1||b==21||b==31)
        printf("%dst October %d",b,c);
        else if(b==2||b==22)
        printf("%dnd October %d",b,c);
        else if(b==3||b==23)
        printf("%drd October %d",b,c);
        else
        printf("%dth October %d",b,c);
        break;
    case 11:
        if(b==1||b==21||b==31)
        printf("%dst November %d",b,c);
        else if(b==2||b==22)
        printf("%dnd November %d",b,c);
        else if(b==3||b==23)
        printf("%drd November %d",b,c);
        else
        printf("%dth November %d",b,c);
        break;
    case 12:
        if(b==1||b==21||b==31)
        printf("%dst December %d",b,c);
        else if(b==2||b==22)
        printf("%dnd December %d",b,c);
        else if(b==3||b==23)
        printf("%drd December %d",b,c);
        else
        printf("%dth December %d",b,c);
        break;
    default:
        printf("ERROR");
        break;

    }
}