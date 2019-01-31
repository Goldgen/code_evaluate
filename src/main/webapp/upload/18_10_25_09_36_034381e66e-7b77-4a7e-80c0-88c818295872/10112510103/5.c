#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if((a%4)==0)
        printf("闰年");
    else
       printf("不是闰年");
    switch(b)
    {
    case 3: case 4: case 5:
        printf(" 春季");
        break;
     case 6: case 7: case 8:
        printf(" 夏季");
        break;
     case 9: case 10: case 11:
        printf(" 秋季");
       break;
     case 1: case 2: case 12:
        printf(" 冬季");
        break;
     default:
        printf("ERROR");
        break;
    }
    if((a%4==0)&&(b==2))
        printf(" 29");
    if(((a%4)!=0)&&(b==2))
        printf(" 28");
    switch(b)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf(" 31");
        break ;
    case 4: case 6: case 9: case 11:
        printf(" 30");
        break;
    default:
        printf("ERROR");
        break;
    }

    return 0;


}
