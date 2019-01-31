#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&b,&a,&c);
    switch(b)
    {
    case 1:
        if(1==a||21==a||31==a){printf("%dst January",a);break;}
        if(2==a||22==a){printf("%dnd January",a);break;}
        if(3==a||23==a){printf("%drd January",a);break;}
        else {printf("%dth January",a);break;}
    case 2:
        if(1==a||21==a){printf("%dst February",a);break;}
        if(2==a||22==a){printf("%dnd February",a);break;}
        if(3==a||23==a){printf("%drd February",a);break;}
        else {printf("%dth February",a);break;}
    case 3:
        if(1==a||21==a||31==a){printf("%dst March",a);break;}
        if(2==a||22==a){printf("%dnd March",a);break;}
        if(3==a||23==a){printf("%drd March",a);break;}
        else {printf("%dth March",a);break;}
    case 4:
        if(1==a||21==a||31==a){printf("%dst April",a);break;}
        if(2==a||22==a){printf("%dnd April",a);break;}
        if(3==a||23==a){printf("%drd April",a);break;}
        else {printf("%dth April",a);break;}
    case 5:
        if(1==a||21==a||31==a){printf("%dst May",a);break;}
        if(2==a||22==a){printf("%dnd May",a);break;}
        if(3==a||23==a){printf("%drd May",a);break;}
        else {printf("%dth May",a);break;}
    case 6:
        if(1==a||21==a||31==a){printf("%dst June",a);break;}
        if(2==a||22==a){printf("%dnd June",a);break;}
        if(3==a||23==a){printf("%drd June",a);break;}
        else {printf("%dth June",a);break;}
    case 7:
        if(1==a||21==a||31==a){printf("%dst July",a);break;}
        if(2==a||22==a){printf("%dnd July",a);break;}
        if(3==a||23==a){printf("%drd July",a);break;}
        else {printf("%dth July",a);break;}
    case 8:
        if(1==a||21==a||31==a){printf("%dst August",a);break;}
        if(2==a||22==a){printf("%dnd August",a);break;}
        if(3==a||23==a){printf("%drd August",a);break;}
        else {printf("%dth August",a);break;}
    case 9:
        if(1==a||21==a||31==a){printf("%dst September",a);break;}
        if(2==a||22==a){printf("%dnd September",a);break;}
        if(3==a||23==a){printf("%drd September",a);break;}
        else {printf("%dth September",a);break;}
    case 10:
        if(1==a||21==a||31==a){printf("%dst October",a);break;}
        if(2==a||22==a){printf("%dnd October",a);break;}
        if(3==a||23==a){printf("%drd October",a);break;}
        else {printf("%dth October",a);break;}
    case 11:
        if(1==a||21==a||31==a){printf("%dst November",a);break;}
        if(2==a||22==a){printf("%dnd November",a);break;}
        if(3==a||23==a){printf("%drd November",a);break;}
        else {printf("%dth November",a);break;}
    case 12:
        if(1==a||21==a||31==a){printf("%dst December",a);break;}
        if(2==a||22==a){printf("%dnd December",a);break;}
        if(3==a||23==a){printf("%drd December",a);break;}
        else {printf("%dth December",a);break;}
    default:break;
    }
    printf(" %d",c);
    return 0;
}
